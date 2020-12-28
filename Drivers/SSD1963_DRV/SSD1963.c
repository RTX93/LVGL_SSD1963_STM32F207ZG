
#include "../COMMON_DRV/Common.h"

/*****************************************************************************
 *  Module for Microchip Graphics Library
 *  Solomon Systech. SSD1963 LCD controller driver
 *****************************************************************************
 * FileName:        SSD1963.c
 * Dependencies:    Graphics.h
 * Processor:       PIC24, PIC32
 * Compiler:       	MPLAB C30, MPLAB C32
 * Linker:          MPLAB LINK30, MPLAB LINK32
 * Company:			TechToys Company
 * Remarks:			The origin of this file was the ssd1926.c driver released
 *					by Microchip Technology Incorporated.
 *
 * Software License Agreement as below:
 *
 * Company:         Microchip Technology Incorporatedpage

 *
 * Software License Agreement
 *
 * Copyright ?2008 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED ?S IS?WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 * Author               Date        Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Anton Alkhimenok     08/27/08	(Original)
 *
 *****************************************************************************/

/*
******************************************************************************
* Versions 120709
*
* John Leung @ TechToys Co.			12/07/09
* www.TechToys.com.hk
******************************************************************************
*/

/*
******************************************************************************
* Remarks:
* 1. Removed hardware definition for LED_LAT_BIT and LED_TRIS_BIT
*	  because PWM pin of SSD1963 applied, therefore backlight intensity
*	  set by software
* 2. Add new function void SetBacklight(BYTE intensity)
* 3. Funny finding, PLL to 120MHz work only when 10MHz crystal applied with
* 	  multiplier N = 35. A crystal with 4MHz attempted but the PLL frequency
*	  failed to boost to 120MHz somehow!
*
* John Leung @ TechToys Co.			09/09/2009
* www.TechToys.com.hk
******************************************************************************
*/

/*
******************************************************************************
* Revision:
* Port ot Microchip Graphics Library v2.00
* (1) Only BLOCKING CONFIGURATION is supported
* (2) GetPixel() not working yet.
* John Leung @ TechToys Co.			15th Jan 2010
* www.TechToys.com.hk
******************************************************************************
*/


/*
******************************************************************************
* Revision:
* (1) Optimize for LCD_WriteData() by removing CS_LAT_BIT for each write cycle
*	  and append CS strobe between multiple LCD_WriteData()
*
* John Leung @ TechToys Co.			3rd Feb 2010
* www.TechToys.com.hk
******************************************************************************
*/

// Color
u16  _color;
// Clipping region control
u16 _clipRgn;
// Clipping region borders
u16 _clipLeft;
u16 _clipTop;
u16 _clipRight;
u16 _clipBottom;

// Active Page
//FIX By SURESH
u8  _activePage;
// Visual Page
u8  _visualPage;

// ssd1963 specific
u8 CMD_DelayEnable = 0;

void LCD_SetArea(u32 start_x, u32 start_y, u32 end_x, u32 end_y);




/*********************************************************************
* Macros:  PMPWaitBusy()
*
* Overview: waits for PMP cycle end.
*
* PreCondition: none
*
* Input: none
*
* Output: none
*
* Side Effects: none
*
* Note:
********************************************************************/
#define PMPWaitBusy()  Nop();


/*********************************************************************
* Function:  LCD_SetArea(start_x,start_y,end_x,end_y)
*
* PreCondition: SetActivePage(page)
*
* Input: start_x, end_x	- start column and end column
*		 start_y,end_y 	- start row and end row position (i.e. page address)
*
* Output: none
*
* Side Effects: none
*
* Overview: defines start/end columns and start/end rows for memory access
*			from host to SSD1963
* Note: none
********************************************************************/
void LCD_SetArea(u32 start_x, u32 start_y, u32 end_x, u32 end_y)
{


	//long offset;

	//offset = (u16)_activePage*(GetMaxY()+1);

	//start_y = offset + start_y;
	//end_y   = offset + end_y;

	SSD1963_Write_Command(CMD_SET_COLUMN); //SET page address
	SSD1963_Write_Data((start_x)>>8); //SET start page address=0
	SSD1963_Write_Data(start_x);
	SSD1963_Write_Data((end_x)>>8); //SET end page address=320
	SSD1963_Write_Data(end_x);
	SSD1963_Write_Command(CMD_SET_PAGE); //SET column address
	SSD1963_Write_Data((start_y)>>8); //SET start column address=0
	SSD1963_Write_Data(start_y);
	SSD1963_Write_Data((end_y)>>8); //SET end column address=240
	SSD1963_Write_Data(end_y);
}

/*********************************************************************
* Function:  SetScrollArea(SHORT top, SHORT scroll, SHORT bottom)
*
* PreCondition: none
*
* Input: top - Top Fixed Area in number of lines from the top
*				of the frame buffer
*		 scroll - Vertical scrolling area in number of lines
*		 bottom - Bottom Fixed Area in number of lines
*
* Output: none
*
* Side Effects: none
*
* Overview:
*
* Note: Reference: section 9.22 Set Scroll Area, SSD1963 datasheet Rev0.20
********************************************************************/
void LCD_SetScrollArea(u16 top, u16 scroll, u16 bottom)
{
	LCD_WriteCommand(CMD_SET_SCROLL_AREA);

	LCD_WriteData(top>>8);
	LCD_WriteData(top);
	LCD_WriteData(scroll>>8);
	LCD_WriteData(scroll);
	LCD_WriteData(bottom>>8);
	LCD_WriteData(bottom);
}

/*********************************************************************
* Function:  void  SetScrollStart(SHORT line)
*
* Overview: First, we need to define the scrolling area by SetScrollArea()
*			before using this function.
*
* PreCondition: SetScrollArea(SHORT top, SHORT scroll, SHORT bottom)
*
* Input: line - Vertical scrolling pointer (in number of lines) as
*		 the first display line from the Top Fixed Area defined in SetScrollArea()
*
* Output: none
*
* Note: Example -
*
*		SHORT line=0;
*		SetScrollArea(0,272,0);
*		for(line=0;line<272;line++) {SetScrollStart(line);LCD_Delay(100);}
*
*		Code above scrolls the whole page upwards in 100ms interval
*		with page 2 replacing the first page in scrolling
********************************************************************/
void LCD_SetScrollStart(u16 line)
{
	LCD_WriteCommand(CMD_SET_SCROLL_START);

	LCD_WriteData(line>>8);
	LCD_WriteData(line);
	
}

/*********************************************************************
* Function:  void EnterSleepMode (void)
* PreCondition: none
* Input:  none
* Output: none
* Side Effects: none
* Overview: SSD1963 enters sleep mode
* Note: Host must wait 5mS after sending before sending next command
********************************************************************/
void LCD_EnterSleepMode (void)
{
	LCD_WriteCommand(CMD_ENT_SLEEP);
}

/*********************************************************************
* Function:  void ExitSleepMode (void)
* PreCondition: none
* Input:  none
* Output: none
* Side Effects: none
* Overview: SSD1963 enters sleep mode
* Note:   none
********************************************************************/
void LCD_ExitSleepMode (void)
{
	LCD_WriteCommand(CMD_EXIT_SLEEP);
}

/*********************************************************************
* Function:  void  SetBacklight(BYTE intensity)
*
* Overview: This function makes use of PWM feature of ssd1963 to adjust
*			the backlight intensity.
*
* PreCondition: Backlight circuit with shutdown pin connected to PWM output of ssd1963.
*
* Input: 	(BYTE) intensity from
*			0x00 (total backlight shutdown, PWM pin pull-down to VSS)
*			0xff (99% pull-up, 255/256 pull-up to VDD)
*
* Output: none
*
* Note: The base frequency of PWM set to around 300Hz with PLL set to 120MHz.
*		This parameter is hardware dependent
********************************************************************/
void LCD_SetBacklight(u8 intensity)
{
	LCD_WriteCommand(CMD_SET_PWM_CONF);			// Set PWM configuration for backlight control

	LCD_WriteData(0x0E);			// PWMF[7:0] = 2, PWM base freq = PLL/(256*(1+5))/256 =
								// 300Hz for a PLL freq = 120MHz
	LCD_WriteData(intensity);		// Set duty cycle, from 0x00 (total pull-down) to 0xFF
								// (99% pull-up , 255/256)
	LCD_WriteData(0x01);			// PWM enabled and controlled by host (mcu)
	LCD_WriteData(0x00);
	LCD_WriteData(0x00);
	LCD_WriteData(0x00);

}

/*********************************************************************
* Function:  void  SetTearingCfg(BOOL state, BOOL mode)
*
* Overview: This function enable/disable tearing effect
*
* PreCondition: none
*
* Input: 	BOOL state -	1 to enable
*							0 to disable
*			BOOL mode -		0:  the tearing effect output line consists
*								of V-blanking information only
*							1:	the tearing effect output line consists
*								of both V-blanking and H-blanking info.
* Output: none
*
* Note:
********************************************************************/
void LCD_SetTearingCfg(bool state, bool mode)
{


	if(state == 1)
	{
		LCD_WriteCommand(CMD_SET_TEAR_ON);
		
		LCD_WriteData(mode&0x01);
		
	}
	else
	{
		LCD_WriteCommand(CMD_SET_TEAR_OFF);
		
	}


}
/*********************************************************************
* Function: void PutPixel(SHORT x, SHORT y)
*
* PreCondition: none
*
* Input: x,y - pixel coordinates
*
* Output: none
*
* Side Effects: none
*
* Overview: puts pixel
*
* Note:
********************************************************************/
void LCD_PutPixel(u16 x, u16 y, u32 color)
{

	if(_clipRgn){
		if(x<_clipLeft)  //320
			return;
		if(x>_clipRight) //0
			return;
		if(y<_clipTop)  //240
			return;
		if(y>_clipBottom)  // 0
			return;
	}

	LCD_SetArea(x,y,320,240);
	LCD_WriteCommand(CMD_WR_MEMSTART);
	
	//LCD_WriteData(color);
	 SendData( color );
	
}

/*********************************************************************
* Function: void ClearDevice(void)
*
* PreCondition: none
*
* Input: none
*
* Output: none
*
* Side Effects: none
*
* Overview: clears screen with current color
*
* Note: none
*
********************************************************************/
void LCD_Clear(u32 color)
{
	u32 xcounter, ycounter;

	LCD_SetArea(0,0,GetMaxX(),GetMaxY());

	LCD_WriteCommand(CMD_WR_MEMSTART);

	
	for(ycounter=0;ycounter<GetMaxY()+1;ycounter++)
	{
		for(xcounter=0;xcounter<GetMaxX()+1;xcounter++)
		{
			//LCD_WriteData(color);
			SendData(color); //DISP is 24  bit But Data Line 8 bit
		}
	}

	
}


void LCD_Delay(vu32 nCount)
{
  nCount = nCount * 1000;
  for(; nCount != 0; nCount--);
}

void LCD_DelayUs(vu32 nCount)
{
  for(; nCount != 0; nCount--);
}



/*Reference TEST Code For SSD1963 From Display Manual*/
/*
 * 5.3 8bit-80 interface mode , 262K color , 5.7_Panel:320xRGBx240
 */

void Command_Write(unsigned char command,unsigned char data1)
{
	SSD1963_Write_Command(command);
	SSD1963_Write_Data(data1);
}

void WindowSet(unsigned int s_x,unsigned int e_x,unsigned int s_y,unsigned int e_y)
{
	SSD1963_Write_Command(CMD_SET_COLUMN); //SET page address
	SSD1963_Write_Data((s_x)>>8); //SET start page address=0
	SSD1963_Write_Data(s_x);
	SSD1963_Write_Data((e_x)>>8); //SET end page address=320
	SSD1963_Write_Data(e_x);
	SSD1963_Write_Command(CMD_SET_PAGE); //SET column address
	SSD1963_Write_Data((s_y)>>8); //SET start column address=0
	SSD1963_Write_Data(s_y);
	SSD1963_Write_Data((e_y)>>8); //SET end column address=240
	SSD1963_Write_Data(e_y);
}

void FULL_ON(unsigned long dat)
{
	unsigned int x,y;
	WindowSet(0x0000,0x013f,0x0000,0x00ef);
	SSD1963_Write_Command(CMD_WR_MEMSTART);
	for (x=0;x<320;x++)
	{
		for (y= 0;y<240;y++)
		{
			SendData(dat);
		}
	}
}

void SendData(unsigned int color)
{
#if COLOR_DEPTH == 32 
	SSD1963_Write_Data((uint8_t)((color) >>16)); // color is red	
	SSD1963_Write_Data((uint8_t)(color>>8)); // color is green
	SSD1963_Write_Data((uint8_t)(color) ); // color is blue
#else
	SSD1963_Write_Data((uint8_t)(color>>8)); // color is green
	SSD1963_Write_Data((uint8_t)(color) ); // color is blue

#endif
}


void Initial_SSD1963 (void) //for 5.7 QVGA
#if 1
{
	CMD_DelayEnable =1;

	//Turn ON Back Light
	//HAL_GPIO_WritePin(GPIOA,LCD_BL_Pin, GPIO_PIN_SET);

	IC_RST_RESET; //IC_RST = 0;
	
	HAL_GPIO_WritePin(LCD_RL_GPIO_Port, LCD_RL_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LCD_UD_GPIO_Port, LCD_UD_Pin, GPIO_PIN_RESET);
	
	HAL_Delay(100);
	
	IC_RST_SET; //IC_RST = 1;
	HAL_Delay(10);

	SSD1963_Write_Command(CMD_SOFT_RESET); //Software Reset
	SSD1963_Write_Command(CMD_SOFT_RESET);
	SSD1963_Write_Command(CMD_SOFT_RESET);
	
	Command_Write(CMD_PLL_START,0x01); // START PLL
	Command_Write(CMD_PLL_START,0x03); // LOCK PLL

	SSD1963_Write_Command(CMD_SET_PANEL_MODE); //SET LCD MODE SET TFT 18Bits MODE
	SSD1963_Write_Data(0x0c); //SET TFT MODE & hsync+Vsync+DEN MODE
	SSD1963_Write_Data(0x00); //SET TFT MODE & hsync+Vsync+DEN MODE
	SSD1963_Write_Data(0x01); //SET horizontal size=320-1 HightByte
	SSD1963_Write_Data(0x3f); //SET horizontal size=320-1 LowByte
	SSD1963_Write_Data(0x00); //SET vertical size=240-1 HightByte
	SSD1963_Write_Data(0xef); //SET vertical size=240-1 LowByte
	SSD1963_Write_Data(0x00); //SET even/odd line RGB seq.=RGB

	Command_Write(CMD_SET_DATA_INTERFACE,0x00); //SET pixel data I/F format=8bit
	Command_Write(CMD_SET_DATA_INTERFACE,0x40); // SET R G B format = 6 6 6

	SSD1963_Write_Command(CMD_SET_PLL_MN); //SET PLL freq=113.33MHz ;
	SSD1963_Write_Data(0x22);
	SSD1963_Write_Data(0x03);
	SSD1963_Write_Data(0x04);

	SSD1963_Write_Command(CMD_SET_PCLK); //SET PCLK freq=6.4MHz ; pixel clock frequency
	SSD1963_Write_Data(0x00);
	SSD1963_Write_Data(0xe7);
	SSD1963_Write_Data(0x4f);

	SSD1963_Write_Command(CMD_SET_HOR_PERIOD); //SET HBP
	SSD1963_Write_Data(0x01); //SET HSYNC Total = 440
	SSD1963_Write_Data(0xb8);
	SSD1963_Write_Data(0x00); //SET HBP = 68
	SSD1963_Write_Data(0x44);

	SSD1963_Write_Data(0x0f); //SET VBP 16 = 15 + 1
	SSD1963_Write_Data(0x00); //SET Hsync pulse start position
	SSD1963_Write_Data(0x00);
	SSD1963_Write_Data(0x00); //SET Hsync pulse subpixel start position

	SSD1963_Write_Command(CMD_SET_VER_PERIOD); //SET VBP
	SSD1963_Write_Data(0x01); //SET Vsync total 265 = 264 + 1
	SSD1963_Write_Data(0x08);
	SSD1963_Write_Data(0x00); //SET VBP = 19
	SSD1963_Write_Data(0x13);
	SSD1963_Write_Data(0x07); //SET Vsync pulse 8 = 7 + 1
	SSD1963_Write_Data(0x00); //SET Vsync pulse start position
	SSD1963_Write_Data(0x00);

	SSD1963_Write_Command(CMD_SET_COLUMN); //SET column address
	SSD1963_Write_Data(0x00); //SET start column address=0
	SSD1963_Write_Data(0x00);
	SSD1963_Write_Data(0x01); //SET end column address=320
	SSD1963_Write_Data(0x3f);

	SSD1963_Write_Command(CMD_SET_PAGE); //SET page address
	SSD1963_Write_Data(0x00); //SET start page address=0
	SSD1963_Write_Data(0x00);
	SSD1963_Write_Data(0x00); //SET end page address=240
	SSD1963_Write_Data(0xef);

	SSD1963_Write_Command(CMD_ON_DISPLAY); //SET display on
	SSD1963_Write_Command(CMD_WR_MEMSTART);
	
	CMD_DelayEnable =0;
	
}

#else
{

	CMD_DelayEnable =1;

	//Turn ON Back Light
	//HAL_GPIO_WritePin(GPIOA,LCD_BL_Pin, GPIO_PIN_SET);

	IC_RST_RESET; //IC_RST = 0;
	
	HAL_GPIO_WritePin(LCD_RL_GPIO_Port, LCD_RL_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LCD_UD_GPIO_Port, LCD_UD_Pin, GPIO_PIN_RESET);
	
	HAL_Delay(100);
	
	IC_RST_SET; //IC_RST = 1;
	HAL_Delay(10);
	


	SSD1963_Write_Command(CMD_SOFT_RESET); //Software Reset
	SSD1963_Write_Command(CMD_SOFT_RESET);

	HAL_Delay(10);

	Command_Write(CMD_PLL_START,0x01); // START PLL
	HAL_Delay(100);
	Command_Write(CMD_PLL_START,0x03); // LOCK PLL
	HAL_Delay(10);

    //Avaialble In DataSheet
	//SSD1963_Write_Command(0x01);
	//HAL_Delay(1);
#if 1//18BIT
	SSD1963_Write_Command(CMD_SET_PANEL_MODE); //SET LCD MODE SET TFT 18Bits MODE
	SSD1963_Write_Data(0x0c); //SET TFT MODE & hsync+Vsync+DEN MODE
	SSD1963_Write_Data(0x00); //SET TFT MODE & hsync+Vsync+DEN MODE
	SSD1963_Write_Data(0x01); //SET horizontal size=320-1 HightByte
	SSD1963_Write_Data(0x3f); //SET horizontal size=320-1 LowByte
	SSD1963_Write_Data(0x00); //SET vertical size=240-1 HightByte
	SSD1963_Write_Data(0xef); //SET vertical size=240-1 LowByte
	SSD1963_Write_Data(0x00); //SET even/odd line RGB seq.=RGB
#else //24Bit
	SSD1963_Write_Command(CMD_SET_PANEL_MODE); //LCD MODE Settings
	SSD1963_Write_Data(0x20); //SET LCD MODE SET TFT 24Bits MODE
	SSD1963_Write_Data(0x00); //SET TFT MODE & hsync+Vsync+DEN MODE
	SSD1963_Write_Data(0x01); //SET horizontal size=320-1 HightByte
	SSD1963_Write_Data(0x3f); //SET horizontal size=320-1 LowByte
	SSD1963_Write_Data(0x00); //SET vertical size=240-1 HightByte
	SSD1963_Write_Data(0xef); //SET vertical size=240-1 LowByte
	SSD1963_Write_Data(0x00); //SET even/odd line RGB seq.=RGB
#endif
	HAL_Delay(10);
	SSD1963_Write_Command(CMD_SET_PLL_MN); //SET PLL freq=110Mhz
	SSD1963_Write_Data(0x21);    //N=33, 33X10=330Mhz
	SSD1963_Write_Data(0x03);    //M=3 330/3=110Mhz
	SSD1963_Write_Data(0x54);
	HAL_Delay(10);

#if COLOR_DEPTH == 32 
	Command_Write(CMD_SET_DATA_INTERFACE,0x00); //SET SSD1963 data input format data 8 bit
#else //16 bit
	Command_Write(CMD_SET_DATA_INTERFACE,0x03); // SET R G B format = 5 6 5
#endif	
	HAL_Delay(10);



	SSD1963_Write_Command(CMD_SET_PCLK);//SET PCLK freq=33MHz = 110MHz * LCDC_FPR / 2^20  [ (110*1000000) * 317433 / 1048576]
	SSD1963_Write_Data(0x04);
	SSD1963_Write_Data(0xD7);
	SSD1963_Write_Data(0xF9);

	HAL_Delay(10);

	SSD1963_Write_Command(CMD_SET_HOR_PERIOD); //SET HBP
	SSD1963_Write_Data(0x01); //SET HSYNC Total = 440
	SSD1963_Write_Data(0xb8);
	SSD1963_Write_Data(0x00); //SET HBP = 68
	SSD1963_Write_Data(0x44);
	SSD1963_Write_Data(0x0f); //SET VBP 16 = 15 + 1
	SSD1963_Write_Data(0x00); //SET Hsync pulse start position
	SSD1963_Write_Data(0x00);
	SSD1963_Write_Data(0x00); //SET Hsync pulse subpixel start position
	HAL_Delay(10);

	SSD1963_Write_Command(CMD_SET_VER_PERIOD); //SET VBP
	SSD1963_Write_Data(0x01); //SET Vsync total 265 = 264 + 1
	SSD1963_Write_Data(0x08);
	SSD1963_Write_Data(0x00); //SET VBP = 19
	SSD1963_Write_Data(0x13);
	SSD1963_Write_Data(0x07); //SET Vsync pulse 8 = 7 + 1
	SSD1963_Write_Data(0x00); //SET Vsync pulse start position
	SSD1963_Write_Data(0x00);
	HAL_Delay(10);

	SSD1963_Write_Command(CMD_SET_COLUMN); //SET column address
	SSD1963_Write_Data(0x00); //SET start column address=0
	SSD1963_Write_Data(0x00);
	SSD1963_Write_Data(0x01); //SET end column address=320
	SSD1963_Write_Data(0x3f);
	HAL_Delay(10);

	SSD1963_Write_Command(CMD_SET_PAGE); //SET page address
	SSD1963_Write_Data(0x00); //SET start page address=0
	SSD1963_Write_Data(0x00);
	SSD1963_Write_Data(0x00); //SET end page address=240
	SSD1963_Write_Data(0xef);
	HAL_Delay(10);

	//Added based on Ref
	SSD1963_Write_Command(CMD_SET_ADDR_MODE); // Address Mode
	SSD1963_Write_Data(0x00);
	HAL_Delay(10);


	SSD1963_Write_Command(CMD_ENT_NORMAL_MODE); //SET display Normal Mode

	SSD1963_Write_Command(CMD_ON_DISPLAY); //SET display on
	HAL_Delay(10);

	//SSD1963_Write_Command(CMD_WR_MEMSTART);
	
	CMD_DelayEnable =0;

}
#endif

void SSD1963_Write_Command (unsigned char command)
{
	 TFT_LCD_REG = command;

	 if(CMD_DelayEnable)
	 {
	 	HAL_Delay(10);
	 }	

}
void SSD1963_Write_Data (unsigned char data)
{	
	 TFT_LCD_RAM = data;
}

