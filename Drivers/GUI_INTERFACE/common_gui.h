/*
 * common_gui.h
 *
 *  Created on: Aug 13, 2020
 *      Author: p
 */

#ifndef GUI_INTERFACE_COMMON_GUI_H_
#define GUI_INTERFACE_COMMON_GUI_H_

/*---------------------------------------INCLUDES ----------------------------------------------------*/

/*----------------------------------------TYPEDEFS ---------------------------------------------------*/

/*--------------------------------------- DEFINES ----------------------------------------------------*/
#define MY_DISP_HOR_RES 320
#define MY_DISP_VER_RES 240

#define CHART_SZ_W 220
#define CHART_SZ_H 155

#define CHART_X    1
#define CHART_Y    42




//Button | LABEL Size Len & High

#define LV_BUTTON_B1_LEN  60
#define LV_BUTTON_B1_HIGH 40

#define LV_BUTTON_B2_LEN  61
#define LV_BUTTON_B2_HIGH 41

#define LV_BUTTON_B3_LEN  LV_BUTTON_B2_LEN
#define LV_BUTTON_B3_HIGH LV_BUTTON_B2_HIGH

#define LV_BUTTON_B4_LEN  LV_BUTTON_B2_LEN
#define LV_BUTTON_B4_HIGH LV_BUTTON_B2_HIGH

#define LV_BUTTON_B5_LEN  LV_BUTTON_B2_LEN+2
#define LV_BUTTON_B5_HIGH LV_BUTTON_B2_HIGH

#define LV_BUTTON_B6_LEN  LV_BUTTON_B2_LEN+7				//This one len is more than other button
#define LV_BUTTON_B6_HIGH LV_BUTTON_B2_HIGH


// Button | LABEL  

#define LV_BUTTON_SPACE	1

#define LV_B1_POS_X		1
#define LV_B1_POS_Y		1

#define LV_B2_POS_X 	1
#define LV_B2_POS_Y		198

#define LV_B3_POS_X 	(LV_B2_POS_X + LV_BUTTON_B2_LEN + LV_BUTTON_SPACE)
#define LV_B3_POS_Y		LV_B2_POS_Y

#define LV_B4_POS_X		(LV_B3_POS_X + LV_BUTTON_B3_LEN + LV_BUTTON_SPACE)
#define LV_B4_POS_Y		LV_B2_POS_Y

#define LV_B5_POS_X		(LV_B4_POS_X + LV_BUTTON_B4_LEN + LV_BUTTON_SPACE) 
#define LV_B5_POS_Y		LV_B2_POS_Y

#define LV_B6_POS_X		(LV_B5_POS_X + LV_BUTTON_B5_LEN + LV_BUTTON_SPACE) 
#define LV_B6_POS_Y		LV_B2_POS_Y


// For Label's
#define LV_LL_SPACE  1

//Status 
#define LV_LL_STATUS_X 62 
#define LV_LL_STATUS_Y 1

#define LV_LL_STATUS_LEN   110
#define LV_LL_STATUS_HIGH  LV_BUTTON_B1_HIGH


//Information Label
#define LV_LL_INFO_X (LV_LL_STATUS_X + LV_LL_STATUS_LEN + LV_LL_SPACE)
#define LV_LL_INFO_Y 1

#define LV_LL_INFO_LEN   146
#define LV_LL_INFO_HIGH  LV_LL_STATUS_HIGH


//FIO2 %

#define LV_LL_FIO2_X ( CHART_X + CHART_SZ_W + LV_LL_SPACE)
#define LV_LL_FIO2_Y CHART_Y

#define LV_LL_FIO2_LEN   46 
#define LV_LL_FIO2_HIGH  38

//FIO2 VALUE
#define LV_LL_FIO2V_X ( LV_LL_FIO2_X + LV_LL_FIO2_LEN + LV_LL_SPACE)
#define LV_LL_FIO2V_Y ( LV_LL_FIO2_Y )

#define LV_LL_FIO2V_LEN  LV_LL_FIO2_LEN +3 
#define LV_LL_FIO2V_HIGH  LV_LL_FIO2_HIGH


//PIP %

#define LV_LL_PIP_X LV_LL_FIO2_X
#define LV_LL_PIP_Y ( LV_LL_FIO2_Y + LV_LL_FIO2_HIGH + LV_LL_SPACE )

#define LV_LL_PIP_LEN   LV_LL_FIO2_LEN
#define LV_LL_PIP_HIGH  LV_LL_FIO2_HIGH

//PIP VALUE
#define LV_LL_PIPV_X ( LV_LL_PIP_X + LV_LL_PIP_LEN + LV_LL_SPACE)
#define LV_LL_PIPV_Y ( LV_LL_PIP_Y )

#define LV_LL_PIPV_LEN  LV_LL_FIO2V_LEN 
#define LV_LL_PIPV_HIGH  LV_LL_FIO2V_HIGH


//PIP %

#define LV_LL_PIP_X LV_LL_FIO2_X
#define LV_LL_PIP_Y ( LV_LL_FIO2_Y + LV_LL_FIO2_HIGH + LV_LL_SPACE )

#define LV_LL_PIP_LEN   LV_LL_FIO2_LEN
#define LV_LL_PIP_HIGH  LV_LL_FIO2_HIGH

//PIP VALUE
#define LV_LL_PIPV_X ( LV_LL_PIP_X + LV_LL_PIP_LEN + LV_LL_SPACE)
#define LV_LL_PIPV_Y ( LV_LL_PIP_Y )

#define LV_LL_PIPV_LEN  LV_LL_FIO2V_LEN 
#define LV_LL_PIPV_HIGH  LV_LL_FIO2V_HIGH


//Pplat %

#define LV_LL_Pplat_X LV_LL_PIP_X
#define LV_LL_Pplat_Y ( LV_LL_PIP_Y + LV_LL_PIP_HIGH + LV_LL_SPACE )

#define LV_LL_Pplat_LEN   LV_LL_FIO2_LEN
#define LV_LL_Pplat_HIGH  LV_LL_FIO2_HIGH

//Pplat VALUE
#define LV_LL_PplatV_X ( LV_LL_Pplat_X + LV_LL_Pplat_LEN + LV_LL_SPACE)
#define LV_LL_PplatV_Y ( LV_LL_Pplat_Y )

#define LV_LL_PplatV_LEN  LV_LL_FIO2V_LEN 
#define LV_LL_PplatV_HIGH  LV_LL_FIO2V_HIGH


//PEEP %

#define LV_LL_PEEP_X LV_LL_Pplat_X
#define LV_LL_PEEP_Y ( LV_LL_Pplat_Y + LV_LL_Pplat_HIGH + LV_LL_SPACE )

#define LV_LL_PEEP_LEN   LV_LL_FIO2_LEN
#define LV_LL_PEEP_HIGH  (LV_LL_FIO2_HIGH)

//PEEP VALUE
#define LV_LL_PEEPV_X ( LV_LL_PEEP_X + LV_LL_PEEP_LEN + LV_LL_SPACE)
#define LV_LL_PEEPV_Y ( LV_LL_PEEP_Y )

#define LV_LL_PEEPV_LEN  LV_LL_FIO2V_LEN 
#define LV_LL_PEEPV_HIGH  (LV_LL_FIO2V_HIGH)




//#define DARK_THEME
/*--------------------------------------- Enums ----------------------------------------------------*/


typedef enum tagen_SwitchList
{
	/*0x00*/	MODE_KEY	= 0x00,
	/*0x01*/	TV_KEY,	
	/*0x02*/	RR_KEY, 
	/*0x03*/	IE_KEY, 
	/*0x04*/	Pr_LMT_KEY, 
	/*0x05*/	TRIGGER_KEY, 
	/*0x06*/	PAUSE_KEY, 
	/*0x07*/	ALARM_KEY, 	   
	/*0x08*/	REPORT_KEY,	   

}KeyPad_List;

/*---------------------------------------- MACROS ----------------------------------------------------*/

/*-------------------------------------- GLOBAL VAR'S ------------------------------------------------*/

/*-------------------------------------- EXT GLOBAL VAR'S --------------------------------------------*/

/*------------------------------------------ PROTO'S --------------------------------------------------*/

void SSD1963_8Bit_LCD_Init( void );

void SSD1963_FSMC_8Bit_LCD_UNIT_TEST( void );


void LVGL_GUI_Init(void);

void SSD1963_flush_cb(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p);

void Lvgl_Tick_Loops( uint32_t ui32TimeDelay );

/* TEST Pupose Only*/
void Ventilator_GUI_Init(void) ;

void ModeButton( void );


void create_chart(void);


//TEST
bool my_input_read(lv_indev_data_t *data);

uint8_t mode_btn_read( void );
uint8_t TV_btn_read( void );

void my_button_init( void );

//TEST
void lv_demo_keypad_encoder(void);

#endif /* GUI_INTERFACE_COMMON_GUI_H_ */
