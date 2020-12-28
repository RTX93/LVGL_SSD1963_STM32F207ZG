/*
 * common_gui.c
 *
 *  Created on: Aug 13, 2020
 *      Author: p
 */

/*---------------------------------------INCLUDES ----------------------------------------------------*/
#include "../COMMON_DRV/Common.h"
/*----------------------------------------TYPEDEFS ---------------------------------------------------*/

/*--------------------------------------- DEFINES ----------------------------------------------------*/


/* Miscellaneous Defines for Adjusting The UI Issue */


/*---------------------------------------- MACROS ----------------------------------------------------*/
 
/*-------------------------------------- GLOBAL VAR'S ------------------------------------------------*/
extern char DBGBuff[128];


/*-------------------------------------- EXT GLOBAL VAR'S --------------------------------------------*/
 
extern UART_HandleTypeDef huart6;
/*------------------------------------------ FUNC'S --------------------------------------------------*/
 
/********************************************************************************************
 * 					 LCD Init API
 *********************************************************************************************/
 
 void SSD1963_8Bit_LCD_Init( void )
 {
	   sprintf(DBGBuff,"Common.c %d>FSMC-TEST\r\n",__LINE__);
	   HAL_UART_Transmit(&huart6,DBGBuff,strlen(DBGBuff), 1000);
 
	   HAL_UART_Transmit(&huart6,"SSD1963-Init-S\r\n",strlen("SSD1963-Init-S\r\n"), 1000);
	   Initial_SSD1963();
	   HAL_UART_Transmit(&huart6,"SSD1963-Init-E\r\n",strlen("SSD1963-Init-E\r\n"), 1000);
 }
 
 
 /********************************************************************************************
  * 					 LCD Unit Test API
  *********************************************************************************************/
 
 void SSD1963_FSMC_8Bit_LCD_UNIT_TEST( void )
 {
		FULL_ON(BLACK);
		HAL_Delay(3000);
		FULL_ON(RED);
		HAL_Delay(3000);
		FULL_ON(GREEN);
		HAL_Delay(3000);
		FULL_ON(BLUE);
		HAL_Delay(3000);
		FULL_ON(MAGENTA);
		HAL_Delay(3000);
		FULL_ON(INDIGO);
		HAL_Delay(4000);
		FULL_ON(YELLOW);
		HAL_Delay(3000);
		FULL_ON(DARKGREEN);
		HAL_Delay(3000);
		FULL_ON(WHITE);
		HAL_Delay(3000);
 }
 
 
 /********************************************************************************************
  * 					                LVGL Init
  *********************************************************************************************/
 
 void LVGL_GUI_Init(void)
 {
 
 /*----------------------< SSD1963 DRIVER INIT >  ------------------------------------*/
 
	 SSD1963_8Bit_LCD_Init();
 
 /*----------------------< LVGL BUFFER INIT >  ------------------------------------*/
				 
	 static lv_disp_buf_t disp_buf;
 
	 /*Static or global buffer(s). The second buffer is optional*/
	 static lv_color_t buf_1[MY_DISP_HOR_RES * 10];
	 static lv_color_t buf_2[MY_DISP_HOR_RES * 10];
 
	 /*Initialize `disp_buf` with the buffer(s) */
	 lv_disp_buf_init(&disp_buf, buf_1, buf_2, MY_DISP_HOR_RES*10);
 
 
 /*----------------------< LVGL DRIVER INIT >  ------------------------------------*/
 
	lv_disp_drv_t disp_drv; 			 /*A variable to hold the drivers. Can be local variable*/
	lv_disp_drv_init(&disp_drv);			/*Basic initialization*/
 
	disp_drv.buffer = &disp_buf;			/*Set an initialized buffer*/
 
 /*----------------------< LVGL SET DISP RES>  ------------------------------------*/
	disp_drv.hor_res = 340;
	disp_drv.ver_res = 240;
 /*----------------------< LVGL BUFF TO DISP DRV>  ------------------------------------*/
 
	disp_drv.flush_cb = SSD1963_flush_cb;		/*Set a flush callback to draw to the display*/
 
	lv_disp_t * disp;
	
	disp = lv_disp_drv_register(&disp_drv); /*Register the driver and save the created display objects*/
 
 /*----------------------< LVGL INPUT DEV INIT>  ------------------------------------*/
 	_lv_indev_init();
 
 }
 
 
 /********************************************************************************************
  * 					                LVGL LCD DRIVER Interface
  *********************************************************************************************/
 void SSD1963_flush_cb(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p)
 {
	 /*The most simple case (but also the slowest) to put all pixels to the screen one-by-one*/
	 int32_t x, y;
	 for(y = area->y1; y <= area->y2; y++) 
		 {
			 for(x = area->x1; x <= area->x2; x++) 
			 {
				 LCD_PutPixel(x, y, color_p->full);
				 color_p++;
			 }
		 }
 
	 /* IMPORTANT!!!
	  * Inform the graphics library that you are ready with the flushing*/
	 lv_disp_flush_ready(disp_drv);
 }
 
 
 
 
 /********************************************************************************************
  * 					                LVGL Tick 
  *********************************************************************************************/
 void Lvgl_Tick_Loops( uint32_t ui32TimeDelay )
 {
	 lv_task_handler();
	 lv_tick_inc(ui32TimeDelay);
 }
 

 

 void lv_test_DPI( void )
 {
	 lv_obj_t * btn1;
	 btn1 = lv_btn_create(lv_scr_act(), NULL);
	 lv_obj_set_pos(btn1, LV_DPI / 10, LV_DPI / 10);	 /*Use LV_DPI to set the position*/
	 lv_obj_set_size(btn1, LV_DPI, LV_DPI / 2); 		 /*Use LVDOI to set the size*/	 
	 //lv_win_set_btn_width(btn1,0);
 }


 

/*------------------------------------------------------------------------------------*/
 /* 									 Key Input Test 							   */
 /*------------------------------------------------------------------------------------*/

extern lv_group_t*	ModeGroup;



uint8_t mode_btn_read( void )
{
  if(HAL_GPIO_ReadPin(MODE_GPIO_Port, MODE_Pin) == GPIO_PIN_SET) 
  {
	HAL_UART_Transmit(&huart6,"MODE_PR\r\n",strlen("MODE_PR\r\n"), 1000);
    return 1;
  } 
  else 
  {
  	return 0;
  }
}

 uint8_t TV_btn_read( void )
 {
   if(HAL_GPIO_ReadPin(TV_GPIO_Port, TV_Pin) == GPIO_PIN_SET) 
   {
	 HAL_UART_Transmit(&huart6,"TV_PR\r\n",strlen("TV_PR\r\n"), 1000);
	 return 1;
   } 
   else 
   {
	 return 0;
   }
 }

 uint8_t RR_btn_read( void )
 {
   if(HAL_GPIO_ReadPin(RR_GPIO_Port, RR_Pin) == GPIO_PIN_SET) 
   {
	 HAL_UART_Transmit(&huart6,"RR_PR\r\n",strlen("RR_PR\r\n"), 1000);
	 return 1;
   } 
   else 
   {
	 return 0;
   }
 }

 uint8_t IE_btn_read( void )
 {
   if(HAL_GPIO_ReadPin(IE_GPIO_Port, IE_Pin) == GPIO_PIN_SET) 
   {
	 HAL_UART_Transmit(&huart6,"IE_PR\r\n",strlen("IE_PR\r\n"), 1000);
	 return 1;
   } 
   else 
   {
	 return 0;
   }
 }

 uint8_t PR_LMT_btn_read( void )
 {
   if(HAL_GPIO_ReadPin(Pr_LMT_GPIO_Port, Pr_LMT_Pin) == GPIO_PIN_SET) 
   {
	 HAL_UART_Transmit(&huart6,"Pr_LMT_PR\r\n",strlen("Pr_LMT_PR\r\n"), 1000);
	 return 1;
   } 
   else 
   {
	 return 0;
   }
 }

 uint8_t TRIGG_LMT_btn_read( void )
 {
   if(HAL_GPIO_ReadPin(TRIGGER_GPIO_Port, TRIGGER_Pin) == GPIO_PIN_SET) 
   {
	 HAL_UART_Transmit(&huart6,"TRIGGER_PR\r\n",strlen("TRIGGER_PR\r\n"), 1000);
	 return 1;
   } 
   else 
   {
	 return 0;
   }
 }
 
 /*------------------------------------------------------------------------------------*/
 /* 									 MODE Key 									   */
 /*------------------------------------------------------------------------------------*/
 
 lv_style_t style_btn;
 

 void btn_event_cb(lv_obj_t * btn, lv_event_t event)
{
	sprintf(DBGBuff,"BTN_CB:%d\r\n",event);
	HAL_UART_Transmit(&huart6,DBGBuff,strlen(DBGBuff), 1000);

    if(event == LV_EVENT_PRESSED) 
	{
		HAL_UART_Transmit(&huart6,"Clicked\r\n",strlen("Clicked\r\n"), 1000);
        static uint8_t cnt = 0;
        cnt++;

        /*Get the first child of the button which is the label and change its text*/
        lv_obj_t * label = lv_obj_get_child(btn, NULL);
		lv_label_set_recolor(label, true);
		lv_label_set_anim_speed(label,300);
        lv_label_set_text_fmt(label, "MODE\n\t\t%d", cnt);
    }
}
 
 /**
  * Create a button with a label and react on Click event.
  */
 void lv_usr_Mode_B1(void)
 {
	 //static lv_style_t style_btn;
 
	 /*Create a simple button style*/
	 lv_style_init(&style_btn);
	 lv_style_set_radius(&style_btn, LV_STATE_DEFAULT, 1);
	 //lv_style_set_bg_opa(&style_btn, LV_STATE_DEFAULT, LV_OPA_COVER);
	 lv_style_set_bg_color(&style_btn, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	 //	 lv_style_set_bg_grad_color(&style_btn, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	 //	 lv_style_set_bg_grad_dir(&style_btn, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);	 
	 lv_style_set_text_color(&style_btn, LV_STATE_DEFAULT, LV_COLOR_WHITE);
 
	 /*Swap the colors in pressed state*/
	 lv_style_set_bg_color(&style_btn, LV_STATE_PRESSED, LV_COLOR_NAVY);
	 //	 lv_style_set_bg_grad_color(&style_btn, LV_STATE_PRESSED, LV_COLOR_SILVER);
 
	 /*Add a border*/
	 lv_style_set_border_color(&style_btn, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	 //	 lv_style_set_border_opa(&style_btn, LV_STATE_DEFAULT, LV_OPA_70);
	 lv_style_set_border_width(&style_btn, LV_STATE_DEFAULT, 1);
 
	 lv_obj_t * btn = lv_btn_create(lv_scr_act(), NULL);	 /*Add a button the current screen*/
	 lv_obj_set_pos(btn, LV_B1_POS_X, LV_B1_POS_Y); 						     /*Set its position*/
	 lv_obj_set_size(btn, LV_BUTTON_B1_LEN, LV_BUTTON_B1_HIGH);							 /*Set its size*/
	 lv_obj_set_event_cb(btn, btn_event_cb);				 /*Assign a callback to the button*/
 
	 lv_obj_t * label = lv_label_create(btn, NULL); 		/*Add a label to the button*/
	 lv_label_set_recolor(label, true); 					/*Enable re-coloring by commands in the text*/
	 lv_label_set_text(label, "MODE"); 			/*Set the labels text*/
	 
	 lv_obj_add_style(btn, LV_BTN_PART_MAIN, &style_btn);
	 //lv_label_set_anim_speed(label,300);
	 //lv_label_set_anim_speed(btn,300);

	 //lv_obj_set_free_num(btn, 1);               /*Set a unique number for the button*/
    //TST lv_group_add_obj(ModeGroup, btn); 
	 
	// lv_indev_set_group(btn, ModeGroup);
 }
 


  
  /*------------------------------------------------------------------------------------*/
  /*									TV  Key 										*/
  /*------------------------------------------------------------------------------------*/
  
  lv_style_t style_btn2;
  
 
  void btn_event_TV_cb(lv_obj_t * btn, lv_event_t event)
 {
	 sprintf(DBGBuff,"BTN_CB:%d\r\n",event);
	 HAL_UART_Transmit(&huart6,DBGBuff,strlen(DBGBuff), 1000);
 
	 if(event == LV_EVENT_PRESSED) 
	 {
		 HAL_UART_Transmit(&huart6,"Clicked\r\n",strlen("Clicked\r\n"), 1000);
		 static uint8_t cnt = 0;
		 cnt++;
 
		 /*Get the first child of the button which is the label and change its text*/
		 lv_obj_t * label = lv_obj_get_child(btn, NULL);
		 lv_label_set_recolor(label, true);
		 lv_label_set_anim_speed(label,300);
		 lv_label_set_text_fmt(label, "TV\n%d", cnt);
	 }
 }
  
  /**
   * Create a button with a label and react on Click event.
   */
  void lv_usr_TV_B2(void)
  {
	  //static lv_style_t style_btn2;
  
	  /*Create a simple button style*/
	  lv_style_init(&style_btn2);
	  lv_style_set_radius(&style_btn2, LV_STATE_DEFAULT, 1);
	  //	  lv_style_set_bg_opa(&style_btn2, LV_STATE_DEFAULT, LV_OPA_COVER);
	  lv_style_set_bg_color(&style_btn2, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	  //  lv_style_set_bg_grad_color(&style_btn2, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	  //  lv_style_set_bg_grad_dir(&style_btn2, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
  
	  /*Swap the colors in pressed state*/
	  lv_style_set_bg_color(&style_btn2, LV_STATE_PRESSED, LV_COLOR_NAVY);
	  //  lv_style_set_bg_grad_color(&style_btn2, LV_STATE_PRESSED, LV_COLOR_SILVER);
  	  lv_style_set_text_color(&style_btn2, LV_STATE_DEFAULT, LV_COLOR_WHITE);
  
	  /*Add a border*/
	  lv_style_set_border_color(&style_btn2, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	  //  lv_style_set_border_opa(&style_btn2, LV_STATE_DEFAULT, LV_OPA_70);
	  lv_style_set_border_width(&style_btn2, LV_STATE_DEFAULT, 1);
  
	  lv_obj_t * btn = lv_btn_create(lv_scr_act(), NULL);	  /*Add a button the current screen*/
	  lv_obj_set_pos(btn, LV_B2_POS_X, LV_B2_POS_Y);							  /*Set its position*/
	  lv_obj_set_size(btn, LV_BUTTON_B2_LEN, LV_BUTTON_B2_HIGH); 						  /*Set its size*/
	  lv_obj_set_event_cb(btn, btn_event_TV_cb);				  /*Assign a callback to the button*/
  
	  lv_obj_t * label = lv_label_create(btn, NULL);		 /*Add a label to the button*/
	  lv_label_set_recolor(label, true);					 /*Enable re-coloring by commands in the text*/
	  lv_label_set_text(label, "TV");			 /*Set the labels text*/
	  
	  lv_obj_add_style(btn, LV_BTN_PART_MAIN, &style_btn2);
	  //lv_label_set_anim_speed(label,300);
	 /// lv_label_set_anim_speed(btn,300);
 
	  //lv_obj_set_free_num(btn, 1);			   /*Set a unique number for the button*/
	 //TST lv_group_add_obj(ModeGroup, btn); 
	  
	 // lv_indev_set_group(btn, ModeGroup);
  }

 /*------------------------------------------------------------------------------------*/
 /*									 RR Key     			  						   */
 /*------------------------------------------------------------------------------------*/
   
   lv_style_t style_btn3;
   
  
   void btn_event_RR_cb(lv_obj_t * btn, lv_event_t event)
  {
	  sprintf(DBGBuff,"BTN_CB:%d\r\n",event);
	  HAL_UART_Transmit(&huart6,DBGBuff,strlen(DBGBuff), 1000);
  
	  if(event == LV_EVENT_PRESSED) 
	  {
		  HAL_UART_Transmit(&huart6,"Clicked\r\n",strlen("Clicked\r\n"), 1000);
		  static uint8_t cnt = 0;
		  cnt++;
  
		  /*Get the first child of the button which is the label and change its text*/
		  lv_obj_t * label = lv_obj_get_child(btn, NULL);
		  lv_label_set_recolor(label, true);
		  lv_label_set_anim_speed(label,300);
		  lv_label_set_text_fmt(label, "RR\n\t%d",cnt);
	  }
  }
   
   /**
	* Create a button with a label and react on Click event.
	*/
   void lv_usr_RR_B3(void)
   {
	   //static lv_style_t style_btn3;
   
	   /*Create a simple button style*/
	   lv_style_init(&style_btn3);
	   lv_style_set_radius(&style_btn3, LV_STATE_DEFAULT, 1);
	   //	   lv_style_set_bg_opa(&style_btn3, LV_STATE_DEFAULT, LV_OPA_COVER);
	   lv_style_set_bg_color(&style_btn3, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	   //  lv_style_set_bg_grad_color(&style_btn3, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	   //  lv_style_set_bg_grad_dir(&style_btn3, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
   
	   /*Swap the colors in pressed state*/
	   lv_style_set_bg_color(&style_btn3, LV_STATE_PRESSED, LV_COLOR_NAVY);
	   //  lv_style_set_bg_grad_color(&style_btn3, LV_STATE_PRESSED, LV_COLOR_SILVER);
	   lv_style_set_text_color(&style_btn3, LV_STATE_DEFAULT, LV_COLOR_WHITE);
   
	   /*Add a border*/
	   lv_style_set_border_color(&style_btn3, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	   //  lv_style_set_border_opa(&style_btn3, LV_STATE_DEFAULT, LV_OPA_70);
	   lv_style_set_border_width(&style_btn3, LV_STATE_DEFAULT, 1);
   
	   lv_obj_t * btn = lv_btn_create(lv_scr_act(), NULL);	   /*Add a button the current screen*/
	   lv_obj_set_pos(btn, LV_B3_POS_X, LV_B3_POS_Y); 						   /*Set its position*/
	   lv_obj_set_size(btn, LV_BUTTON_B3_LEN, LV_BUTTON_B3_HIGH);						   /*Set its size*/
	   lv_obj_set_event_cb(btn, btn_event_RR_cb);				   /*Assign a callback to the button*/
   
	   lv_obj_t * label = lv_label_create(btn, NULL);		  /*Add a label to the button*/
	   lv_label_set_recolor(label, true);					  /*Enable re-coloring by commands in the text*/
	   lv_label_set_text(label, "RR");			  /*Set the labels text*/
	   
	   lv_obj_add_style(btn, LV_BTN_PART_MAIN, &style_btn3);
	   //lv_label_set_anim_speed(label,300);
	  /// lv_label_set_anim_speed(btn,300);
  
	   //lv_obj_set_free_num(btn, 1);				/*Set a unique number for the button*/
	  //TST lv_group_add_obj(ModeGroup, btn); 
	   
	  // lv_indev_set_group(btn, ModeGroup);
   }

   /*------------------------------------------------------------------------------------*/
   /*								   IE Key   										 */
   /*------------------------------------------------------------------------------------*/
	 
	 lv_style_t style_btn4;
	 
	
	 void btn_event_IE_cb(lv_obj_t * btn, lv_event_t event)
	{
		sprintf(DBGBuff,"BTN_CB:%d\r\n",event);
		HAL_UART_Transmit(&huart6,DBGBuff,strlen(DBGBuff), 1000);
	
		if(event == LV_EVENT_PRESSED) 
		{
			HAL_UART_Transmit(&huart6,"Clicked\r\n",strlen("Clicked\r\n"), 1000);
			static uint8_t cnt = 0;
			cnt++;
	
			/*Get the first child of the button which is the label and change its text*/
			lv_obj_t * label = lv_obj_get_child(btn, NULL);
			lv_label_set_recolor(label, true);
			lv_label_set_anim_speed(label,300);
			lv_label_set_text_fmt(label, "I:E\n\t%d:%d", 1,cnt);
		}
	}
	 
	 /**
	  * Create a button with a label and react on Click event.
	  */
	 void lv_usr_IE_B4(void)
	 {
		 //static lv_style_t style_btn4;
	 
		 /*Create a simple button style*/
		 lv_style_init(&style_btn4);
		 lv_style_set_radius(&style_btn4, LV_STATE_DEFAULT, 1);
		 // 	 lv_style_set_bg_opa(&style_btn4, LV_STATE_DEFAULT, LV_OPA_COVER);
		 lv_style_set_bg_color(&style_btn4, LV_STATE_DEFAULT, LV_COLOR_NAVY);
		 //  lv_style_set_bg_grad_color(&style_btn4, LV_STATE_DEFAULT, LV_COLOR_AQUA);
		 //  lv_style_set_bg_grad_dir(&style_btn4, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	 
		 /*Swap the colors in pressed state*/
		 lv_style_set_bg_color(&style_btn4, LV_STATE_PRESSED, LV_COLOR_NAVY);
		 //  lv_style_set_bg_grad_color(&style_btn4, LV_STATE_PRESSED, LV_COLOR_SILVER);
		 lv_style_set_text_color(&style_btn4, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	 
		 /*Add a border*/
		 lv_style_set_border_color(&style_btn4, LV_STATE_DEFAULT, LV_COLOR_BLACK);
		 //  lv_style_set_border_opa(&style_btn4, LV_STATE_DEFAULT, LV_OPA_70);
		 lv_style_set_border_width(&style_btn4, LV_STATE_DEFAULT, 1);
	 
		 lv_obj_t * btn = lv_btn_create(lv_scr_act(), NULL);	 /*Add a button the current screen*/
		 lv_obj_set_pos(btn, LV_B4_POS_X, LV_B4_POS_Y);						 /*Set its position*/
		 lv_obj_set_size(btn, LV_BUTTON_B4_LEN, LV_BUTTON_B4_HIGH);							 /*Set its size*/
		 lv_obj_set_event_cb(btn, btn_event_IE_cb); 				 /*Assign a callback to the button*/
	 
		 lv_obj_t * label = lv_label_create(btn, NULL); 		/*Add a label to the button*/
		 lv_label_set_recolor(label, true); 					/*Enable re-coloring by commands in the text*/
		 lv_label_set_text(label, "I:E");			/*Set the labels text*/
		 
		 lv_obj_add_style(btn, LV_BTN_PART_MAIN, &style_btn4);
		 //lv_label_set_anim_speed(label,300);
		/// lv_label_set_anim_speed(btn,300);
	
		 //lv_obj_set_free_num(btn, 1); 			  /*Set a unique number for the button*/
		//TST lv_group_add_obj(ModeGroup, btn); 
		 
		// lv_indev_set_group(btn, ModeGroup);
	 }
 /*------------------------------------------------------------------------------------*/
 /* 								 PRESSURE LIMIT Key      						   */
 /*------------------------------------------------------------------------------------*/
   
   lv_style_t style_btn5;
   
  
   void btn_event_PR_LMT_cb(lv_obj_t * btn, lv_event_t event)
  {
	  sprintf(DBGBuff,"BTN_CB:%d\r\n",event);
	  HAL_UART_Transmit(&huart6,DBGBuff,strlen(DBGBuff), 1000);
  
	  if(event == LV_EVENT_PRESSED) 
	  {
		  HAL_UART_Transmit(&huart6,"Clicked\r\n",strlen("Clicked\r\n"), 1000);
		  static uint8_t cnt = 0;
		  cnt++;
  
		  /*Get the first child of the button which is the label and change its text*/
		  lv_obj_t * label = lv_obj_get_child(btn, NULL);
		  lv_label_set_recolor(label, true);
		  lv_label_set_anim_speed(label,300);
		  lv_label_set_text_fmt(label, "P Limit\n\t%d", cnt);
	  }
  }
   
   /**
	* Create a button with a label and react on Click event.
	*/
   void lv_usr_PR_LMT_B5(void)
   {
	   //static lv_style_t style_btn5;
   
	   /*Create a simple button style*/
	   lv_style_init(&style_btn5);
	   lv_style_set_radius(&style_btn5, LV_STATE_DEFAULT, 1);
	   //	   lv_style_set_bg_opa(&style_btn5, LV_STATE_DEFAULT, LV_OPA_COVER);
	   lv_style_set_bg_color(&style_btn5, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	   //  lv_style_set_bg_grad_color(&style_btn5, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	   //  lv_style_set_bg_grad_dir(&style_btn5, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
   
	   /*Swap the colors in pressed state*/
	   lv_style_set_bg_color(&style_btn5, LV_STATE_PRESSED, LV_COLOR_NAVY);
	   //  lv_style_set_bg_grad_color(&style_btn5, LV_STATE_PRESSED, LV_COLOR_SILVER);
	   lv_style_set_text_color(&style_btn5, LV_STATE_DEFAULT, LV_COLOR_WHITE);
   
	   /*Add a border*/
	   lv_style_set_border_color(&style_btn5, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	   //  lv_style_set_border_opa(&style_btn5, LV_STATE_DEFAULT, LV_OPA_70);
	   lv_style_set_border_width(&style_btn5, LV_STATE_DEFAULT, 1);
   
	   lv_obj_t * btn = lv_btn_create(lv_scr_act(), NULL);	   /*Add a button the current screen*/
	   lv_obj_set_pos(btn, LV_B5_POS_X , LV_B5_POS_Y);					   /*Set its position*/
	   lv_obj_set_size(btn, LV_BUTTON_B5_LEN, LV_BUTTON_B5_HIGH); 						   /*Set its size*/
	   lv_obj_set_event_cb(btn, btn_event_PR_LMT_cb);				   /*Assign a callback to the button*/
   
	   lv_obj_t * label = lv_label_create(btn, NULL);		  /*Add a label to the button*/
	   lv_label_set_recolor(label, true);					  /*Enable re-coloring by commands in the text*/
	   lv_label_set_text(label, "P Limit"); 		  /*Set the labels text*/
	   
	   lv_obj_add_style(btn, LV_BTN_PART_MAIN, &style_btn5);
	   //lv_label_set_anim_speed(label,300);
	  /// lv_label_set_anim_speed(btn,300);
  
	   //lv_obj_set_free_num(btn, 1);				/*Set a unique number for the button*/
	  //TST lv_group_add_obj(ModeGroup, btn); 
	   
	  // lv_indev_set_group(btn, ModeGroup);
   }

  
/*------------------------------------------------------------------------------------*/
/*								   TRIGGER Key  										 */
/*------------------------------------------------------------------------------------*/
 
 lv_style_t style_btn6;
 

 void btn_event_TRIGGER_cb(lv_obj_t * btn, lv_event_t event)
{
	sprintf(DBGBuff,"BTN_CB:%d\r\n",event);
	HAL_UART_Transmit(&huart6,DBGBuff,strlen(DBGBuff), 1000);

	if(event == LV_EVENT_PRESSED) 
	{
		HAL_UART_Transmit(&huart6,"Clicked\r\n",strlen("Clicked\r\n"), 1000);
		static uint8_t cnt = 0;
		cnt++;

		/*Get the first child of the button which is the label and change its text*/
		lv_obj_t * label = lv_obj_get_child(btn, NULL);
		lv_label_set_recolor(label, true);
		lv_label_set_anim_speed(label,300);
		lv_label_set_text_fmt(label, "Trigger\n\t%d",cnt);
	}
}
 
 /**
  * Create a button with a label and react on Click event.
  */
 void lv_usr_TRIGGER_B6(void)
 {
	 //static lv_style_t style_btn6;
 
	 /*Create a simple button style*/
	 lv_style_init(&style_btn6);
	 lv_style_set_radius(&style_btn6, LV_STATE_DEFAULT, 1);
	 // 	 lv_style_set_bg_opa(&style_btn6, LV_STATE_DEFAULT, LV_OPA_COVER);
	 lv_style_set_bg_color(&style_btn6, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	 //  lv_style_set_bg_grad_color(&style_btn6, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	 //  lv_style_set_bg_grad_dir(&style_btn6, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
 
	 /*Swap the colors in pressed state*/
	 lv_style_set_bg_color(&style_btn6, LV_STATE_PRESSED, LV_COLOR_NAVY);
	 //  lv_style_set_bg_grad_color(&style_btn6, LV_STATE_PRESSED, LV_COLOR_SILVER);
	 lv_style_set_text_color(&style_btn6, LV_STATE_DEFAULT, LV_COLOR_WHITE);
 
	 /*Add a border*/
	 lv_style_set_border_color(&style_btn6, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	 //  lv_style_set_border_opa(&style_btn6, LV_STATE_DEFAULT, LV_OPA_70);
	 lv_style_set_border_width(&style_btn6, LV_STATE_DEFAULT, 1);
 
	 lv_obj_t * btn = lv_btn_create(lv_scr_act(), NULL);	 /*Add a button the current screen*/

	 lv_obj_set_pos(btn, LV_B6_POS_X , LV_B6_POS_Y);				/*Set its position*/
	 lv_obj_set_size(btn, LV_BUTTON_B6_LEN, LV_BUTTON_B6_HIGH); 	/*Set its size*/
	 lv_obj_set_event_cb(btn, btn_event_TRIGGER_cb); 				/*Assign a callback to the button*/
 
	 lv_obj_t * label = lv_label_create(btn, NULL); 		/*Add a label to the button*/
	 lv_label_set_recolor(label, true); 					/*Enable re-coloring by commands in the text*/
	 lv_label_set_text(label, "Trigger");			/*Set the labels text*/
	 
	 lv_obj_add_style(btn, LV_BTN_PART_MAIN, &style_btn6);
	 //lv_label_set_anim_speed(label,300);
	/// lv_label_set_anim_speed(btn,300);
 
	 //lv_obj_set_free_num(btn, 1); 			  /*Set a unique number for the button*/
	//TST lv_group_add_obj(ModeGroup, btn); 
	 
	// lv_indev_set_group(btn, ModeGroup);
 }


 /*------------------------------------------------------------------------------------*/
 /* 								STATUS Label									  */
 /*------------------------------------------------------------------------------------*/

 static lv_style_t style_Status;

 /**
  * Create a button with a label and react on Click event.
  */
 void lv_usr_Status_Label(void)
 {

	/*Create a simple button style*/
	lv_style_init(&style_Status);
	lv_style_set_radius(&style_Status, LV_STATE_DEFAULT, 1);
	//		lv_style_set_bg_opa(&style_Status, LV_STATE_DEFAULT, LV_OPA_COVER);
	lv_style_set_bg_color(&style_Status, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	//	lv_style_set_bg_grad_color(&style_Status, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	//	lv_style_set_bg_grad_dir(&style_Status, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	
	/*Swap the colors in pressed state*/
	lv_style_set_bg_color(&style_Status, LV_STATE_PRESSED, LV_COLOR_NAVY);
	//	lv_style_set_bg_grad_color(&style_Status, LV_STATE_PRESSED, LV_COLOR_SILVER);
	lv_style_set_text_color(&style_Status, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	
	/*Add a border*/
	lv_style_set_border_color(&style_Status, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	//	lv_style_set_border_opa(&style_Status, LV_STATE_DEFAULT, LV_OPA_70);
	lv_style_set_border_width(&style_Status, LV_STATE_DEFAULT, 1);

    /*Create an object with the new style*/
    lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_Status);
	lv_obj_set_size(obj, LV_LL_STATUS_LEN,LV_LL_STATUS_HIGH);
	lv_obj_set_pos(obj,LV_LL_STATUS_X,LV_LL_STATUS_Y);

	lv_obj_t * label = lv_label_create(obj, NULL); 		/*Add a label to the button*/
	lv_label_set_recolor(label, true); 							/*Enable re-coloring by commands in the text*/
	lv_label_set_text(label, "STATUS");							/*Set the labels text*/
	lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);

}
 /*------------------------------------------------------------------------------------*/
 /* 								INFO Label									  		*/
 /*------------------------------------------------------------------------------------*/
  static lv_style_t style_Info;
 
  /**
   * Create a button with a label and react on Click event.
   */
  void lv_usr_Info_Label(void)
  {
 
	 /*Create a simple button style*/
	 lv_style_init(&style_Info);
	 lv_style_set_radius(&style_Info, LV_STATE_DEFAULT, 1);
	 // 	 lv_style_set_bg_opa(&style_Info, LV_STATE_DEFAULT, LV_OPA_COVER);
	 lv_style_set_bg_color(&style_Info, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	 //  lv_style_set_bg_grad_color(&style_Info, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	 //  lv_style_set_bg_grad_dir(&style_Info, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	 
	 /*Swap the colors in pressed state*/
	 lv_style_set_bg_color(&style_Info, LV_STATE_PRESSED, LV_COLOR_NAVY);
	 //  lv_style_set_bg_grad_color(&style_Info, LV_STATE_PRESSED, LV_COLOR_SILVER);
	 lv_style_set_text_color(&style_Info, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	 
	 /*Add a border*/
	 lv_style_set_border_color(&style_Info, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	 //  lv_style_set_border_opa(&style_Info, LV_STATE_DEFAULT, LV_OPA_70);
	 lv_style_set_border_width(&style_Info, LV_STATE_DEFAULT, 1);
 
	 /*Create an object with the new style*/
	 lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
	 lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_Info);
	 lv_obj_set_size(obj, LV_LL_INFO_LEN,LV_LL_INFO_HIGH);
	 lv_obj_set_pos(obj,LV_LL_INFO_X,LV_LL_INFO_Y);
 
	 lv_obj_t * label = lv_label_create(obj, NULL); 	 /*Add a label to the button*/
	 lv_label_set_recolor(label, true); 						 /*Enable re-coloring by commands in the text*/

	 lv_obj_set_style_local_text_color(label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_LIME);
	 lv_obj_set_style_local_text_font (label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_THEME_DEFAULT_FONT_SUBTITLE);

	 lv_label_set_text(label, LV_SYMBOL_CHARGE "	" LV_SYMBOL_BATTERY_3 "\n" LV_SYMBOL_BELL);						 /*Set the labels text*/
	 lv_obj_align(label, NULL, LV_ALIGN_IN_TOP_LEFT, 5, 2);


	 lv_obj_t * label_1 = lv_label_create(obj, NULL); 	 /*Add a label to the button*/
	 lv_label_set_recolor(label_1, true); 						 /*Enable re-coloring by commands in the text*/

	 lv_obj_set_style_local_text_font (label_1, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_THEME_DEFAULT_FONT_SUBTITLE);

	 sprintf(DBGBuff,"%s\n%s",__DATE__,__TIME__);
	 lv_label_set_text(label_1,DBGBuff);						 /*Set the labels text*/ //"27-08-20\n04:55"
	 lv_obj_align(label_1, NULL, LV_ALIGN_IN_TOP_MID, 30, 2);

 
 }


 /*------------------------------------------------------------------------------------*/
 /* 								FIO2% (mbar)           								*/
 /*------------------------------------------------------------------------------------*/

  static lv_style_t style_FIO2;
 
  /**
   * Create a button with a label and react on Click event.
   */
  void lv_usr_Fio2_Label(void)
  {
 
	 /*Create a simple button style*/
	 lv_style_init(&style_FIO2);
	 lv_style_set_radius(&style_FIO2, LV_STATE_DEFAULT, 1);
	 // 	 lv_style_set_bg_opa(&style_FIO2, LV_STATE_DEFAULT, LV_OPA_COVER);
	 lv_style_set_bg_color(&style_FIO2, LV_STATE_DEFAULT, LV_COLOR_PURPLE);
	 //  lv_style_set_bg_grad_color(&style_FIO2, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	 //  lv_style_set_bg_grad_dir(&style_FIO2, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	 
	 /*Swap the colors in pressed state*/
	 lv_style_set_bg_color(&style_FIO2, LV_STATE_PRESSED, LV_COLOR_PURPLE);
	 //  lv_style_set_bg_grad_color(&style_FIO2, LV_STATE_PRESSED, LV_COLOR_SILVER);
	 lv_style_set_text_color(&style_FIO2, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	 
	 /*Add a border*/
	 lv_style_set_border_color(&style_FIO2, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	 //  lv_style_set_border_opa(&style_FIO2, LV_STATE_DEFAULT, LV_OPA_70);
	 lv_style_set_border_width(&style_FIO2, LV_STATE_DEFAULT, 1);
 
	 /*Create an object with the new style*/
	 lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
	 lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_FIO2);
	 lv_obj_set_size(obj, LV_LL_FIO2_LEN,LV_LL_FIO2_HIGH);
	 lv_obj_set_pos(obj,LV_LL_FIO2_X,LV_LL_FIO2_Y);
 
	 lv_obj_t * label = lv_label_create(obj, NULL); 	 /*Add a label to the button*/
	 lv_label_set_recolor(label, true); 						 /*Enable re-coloring by commands in the text*/
	 lv_label_set_text(label, "Fio2%");						 /*Set the labels text*/
	 lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
 
 }

//Fio2 value
  static lv_style_t style_FIO2V;
 
  /**
   * Create a button with a label and react on Click event.
   */
  void lv_usr_Fio2V_Label(void)
  {
 
	 /*Create a simple button style*/
	 lv_style_init(&style_FIO2V);
	 lv_style_set_radius(&style_FIO2V, LV_STATE_DEFAULT, 1);
	 // 	 lv_style_set_bg_opa(&style_FIO2V, LV_STATE_DEFAULT, LV_OPA_COVER);
	 lv_style_set_bg_color(&style_FIO2V, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	 //  lv_style_set_bg_grad_color(&style_FIO2V, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	 //  lv_style_set_bg_grad_dir(&style_FIO2V, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	 
	 /*Swap the colors in pressed state*/
	 lv_style_set_bg_color(&style_FIO2V, LV_STATE_PRESSED, LV_COLOR_NAVY);
	 //  lv_style_set_bg_grad_color(&style_FIO2V, LV_STATE_PRESSED, LV_COLOR_SILVER);
	 lv_style_set_text_color(&style_FIO2V, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	 
	 /*Add a border*/
	 lv_style_set_border_color(&style_FIO2V, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	 //  lv_style_set_border_opa(&style_FIO2V, LV_STATE_DEFAULT, LV_OPA_70);
	 lv_style_set_border_width(&style_FIO2V, LV_STATE_DEFAULT, 1);
 
	 /*Create an object with the new style*/
	 lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
	 lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_FIO2V);
	 lv_obj_set_size(obj, LV_LL_FIO2V_LEN,LV_LL_FIO2V_HIGH);
	 lv_obj_set_pos(obj,LV_LL_FIO2V_X,LV_LL_FIO2V_Y);
 
	 lv_obj_t * label = lv_label_create(obj, NULL); 	 /*Add a label to the button*/
	 lv_label_set_recolor(label, true); 						 /*Enable re-coloring by commands in the text*/
	 lv_label_set_text(label, "00.00");						 /*Set the labels text*/
	 lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
 
 }

 /*------------------------------------------------------------------------------------*/
 /* 								PIP (mbar) 									  */
 /*------------------------------------------------------------------------------------*/
   static lv_style_t style_PIP;
  
   /**
	* Create a button with a label and react on Click event.
	*/
   void lv_usr_PIP_Label(void)
   {
  
	  /*Create a simple button style*/
	  lv_style_init(&style_PIP);
	  lv_style_set_radius(&style_PIP, LV_STATE_DEFAULT, 1);
	  //	  lv_style_set_bg_opa(&style_PIP, LV_STATE_DEFAULT, LV_OPA_COVER);
	  lv_style_set_bg_color(&style_PIP, LV_STATE_DEFAULT, LV_COLOR_PURPLE);
	  //  lv_style_set_bg_grad_color(&style_PIP, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	  //  lv_style_set_bg_grad_dir(&style_PIP, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	  
	  /*Swap the colors in pressed state*/
	  lv_style_set_bg_color(&style_PIP, LV_STATE_PRESSED, LV_COLOR_PURPLE);
	  //  lv_style_set_bg_grad_color(&style_PIP, LV_STATE_PRESSED, LV_COLOR_SILVER);
	  lv_style_set_text_color(&style_PIP, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	  
	  /*Add a border*/
	  lv_style_set_border_color(&style_PIP, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	  //  lv_style_set_border_opa(&style_PIP, LV_STATE_DEFAULT, LV_OPA_70);
	  lv_style_set_border_width(&style_PIP, LV_STATE_DEFAULT, 1);
  
	  /*Create an object with the new style*/
	  lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
	  lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_PIP);
	  lv_obj_set_size(obj, LV_LL_PIP_LEN,LV_LL_PIP_HIGH);
	  lv_obj_set_pos(obj,LV_LL_PIP_X,LV_LL_PIP_Y);
  
	  lv_obj_t * label = lv_label_create(obj, NULL);	  /*Add a label to the button*/
	  lv_label_set_recolor(label, true);						  /*Enable re-coloring by commands in the text*/
	  lv_label_set_text(label, "PIP\n(mbar)");					  /*Set the labels text*/
	  lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);

  }
 
 //Fio2 value
   static lv_style_t style_PIPV;
  
   /**
	* Create a button with a label and react on Click event.
	*/
   void lv_usr_PIPV_Label(void)
   {
  
	  /*Create a simple button style*/
	  lv_style_init(&style_PIPV);
	  lv_style_set_radius(&style_PIPV, LV_STATE_DEFAULT, 1);
	  //	  lv_style_set_bg_opa(&style_PIPV, LV_STATE_DEFAULT, LV_OPA_COVER);
	  lv_style_set_bg_color(&style_PIPV, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	  //  lv_style_set_bg_grad_color(&style_PIPV, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	  //  lv_style_set_bg_grad_dir(&style_PIPV, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	  
	  /*Swap the colors in pressed state*/
	  lv_style_set_bg_color(&style_PIPV, LV_STATE_PRESSED, LV_COLOR_NAVY);
	  //  lv_style_set_bg_grad_color(&style_PIPV, LV_STATE_PRESSED, LV_COLOR_SILVER);
	  lv_style_set_text_color(&style_PIPV, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	  
	  /*Add a border*/
	  lv_style_set_border_color(&style_PIPV, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	  //  lv_style_set_border_opa(&style_PIPV, LV_STATE_DEFAULT, LV_OPA_70);
	  lv_style_set_border_width(&style_PIPV, LV_STATE_DEFAULT, 1);
  
	  /*Create an object with the new style*/
	  lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
	  lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_PIPV);
	  lv_obj_set_size(obj, LV_LL_PIPV_LEN,LV_LL_PIPV_HIGH);
	  lv_obj_set_pos(obj,LV_LL_PIPV_X,LV_LL_PIPV_Y);
  
	  lv_obj_t * label = lv_label_create(obj, NULL);	  /*Add a label to the button*/
	  lv_label_set_recolor(label, true);						  /*Enable re-coloring by commands in the text*/
	  lv_label_set_text(label, "00.00");					  /*Set the labels text*/
	  lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
  
  }


 /*------------------------------------------------------------------------------------*/
 /* 								Pplat (mbar) 									  */
 /*------------------------------------------------------------------------------------*/

   static lv_style_t style_Pplat;
  
   /**
	* Create a button with a label and react on Click event.
	*/
   void lv_usr_Pplat_Label(void)
   {
  
	  /*Create a simple button style*/
	  lv_style_init(&style_Pplat);
	  lv_style_set_radius(&style_Pplat, LV_STATE_DEFAULT, 1);
	  //	  lv_style_set_bg_opa(&style_Pplat, LV_STATE_DEFAULT, LV_OPA_COVER);
	  lv_style_set_bg_color(&style_Pplat, LV_STATE_DEFAULT, LV_COLOR_PURPLE);
	  //  lv_style_set_bg_grad_color(&style_Pplat, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	  //  lv_style_set_bg_grad_dir(&style_Pplat, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	  
	  /*Swap the colors in pressed state*/
	  lv_style_set_bg_color(&style_Pplat, LV_STATE_PRESSED, LV_COLOR_PURPLE);
	  //  lv_style_set_bg_grad_color(&style_Pplat, LV_STATE_PRESSED, LV_COLOR_SILVER);
	  lv_style_set_text_color(&style_Pplat, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	  
	  /*Add a border*/
	  lv_style_set_border_color(&style_Pplat, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	  //  lv_style_set_border_opa(&style_Pplat, LV_STATE_DEFAULT, LV_OPA_70);
	  lv_style_set_border_width(&style_Pplat, LV_STATE_DEFAULT, 1);
  
	  /*Create an object with the new style*/
	  lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
	  lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_Pplat);
	  lv_obj_set_size(obj, LV_LL_Pplat_LEN,LV_LL_Pplat_HIGH);
	  lv_obj_set_pos(obj,LV_LL_Pplat_X,LV_LL_Pplat_Y);
  
	  lv_obj_t * label = lv_label_create(obj, NULL);	  /*Add a label to the button*/
	  lv_label_set_recolor(label, true);						  /*Enable re-coloring by commands in the text*/
	  lv_label_set_text(label, "Pplat\n(mbar)");					  /*Set the labels text*/
	  lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);

  }
 
 //Fio2 value
   static lv_style_t style_PplatV;
  
   /**
	* Create a button with a label and react on Click event.
	*/
   void lv_usr_PplatV_Label(void)
   {
  
	  /*Create a simple button style*/
	  lv_style_init(&style_PplatV);
	  lv_style_set_radius(&style_PplatV, LV_STATE_DEFAULT, 1);
	  //	  lv_style_set_bg_opa(&style_PplatV, LV_STATE_DEFAULT, LV_OPA_COVER);
	  lv_style_set_bg_color(&style_PplatV, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	  //  lv_style_set_bg_grad_color(&style_PplatV, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	  //  lv_style_set_bg_grad_dir(&style_PplatV, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	  
	  /*Swap the colors in pressed state*/
	  lv_style_set_bg_color(&style_PplatV, LV_STATE_PRESSED, LV_COLOR_NAVY);
	  //  lv_style_set_bg_grad_color(&style_PplatV, LV_STATE_PRESSED, LV_COLOR_SILVER);
	  lv_style_set_text_color(&style_PplatV, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	  
	  /*Add a border*/
	  lv_style_set_border_color(&style_PplatV, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	  //  lv_style_set_border_opa(&style_PplatV, LV_STATE_DEFAULT, LV_OPA_70);
	  lv_style_set_border_width(&style_PplatV, LV_STATE_DEFAULT, 1);
  
	  /*Create an object with the new style*/
	  lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
	  lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_PplatV);
	  lv_obj_set_size(obj, LV_LL_PplatV_LEN,LV_LL_PplatV_HIGH);
	  lv_obj_set_pos(obj,LV_LL_PplatV_X,LV_LL_PplatV_Y);
  
	  lv_obj_t * label = lv_label_create(obj, NULL);	  /*Add a label to the button*/
	  lv_label_set_recolor(label, true);						  /*Enable re-coloring by commands in the text*/
	  lv_label_set_text(label, "00.00");					  /*Set the labels text*/
	  lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
  
  }


 /*------------------------------------------------------------------------------------*/
 /* 								PEEP (mbar)									       */
 /*------------------------------------------------------------------------------------*/

  static lv_style_t style_PEEP;

   /**
	* Create a button with a label and react on Click event.
	*/
   void lv_usr_PEEP_Label(void)
   {
  
	  /*Create a simple button style*/
	  lv_style_init(&style_PEEP);
	  lv_style_set_radius(&style_PEEP, LV_STATE_DEFAULT, 1);
	  //	  lv_style_set_bg_opa(&style_PEEP, LV_STATE_DEFAULT, LV_OPA_COVER);
	  lv_style_set_bg_color(&style_PEEP, LV_STATE_DEFAULT, LV_COLOR_PURPLE);
	  //  lv_style_set_bg_grad_color(&style_PEEP, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	  //  lv_style_set_bg_grad_dir(&style_PEEP, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	  
	  /*Swap the colors in pressed state*/
	  lv_style_set_bg_color(&style_PEEP, LV_STATE_PRESSED, LV_COLOR_PURPLE);
	  //  lv_style_set_bg_grad_color(&style_PEEP, LV_STATE_PRESSED, LV_COLOR_SILVER);
	  lv_style_set_text_color(&style_PEEP, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	  
	  /*Add a border*/
	  lv_style_set_border_color(&style_PEEP, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	  //  lv_style_set_border_opa(&style_PEEP, LV_STATE_DEFAULT, LV_OPA_70);
	  lv_style_set_border_width(&style_PEEP, LV_STATE_DEFAULT, 1);
  
	  /*Create an object with the new style*/
	  lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
	  lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_PEEP);
	  lv_obj_set_size(obj, LV_LL_PEEP_LEN,LV_LL_PEEP_HIGH);
	  lv_obj_set_pos(obj,LV_LL_PEEP_X,LV_LL_PEEP_Y);
  
	  lv_obj_t * label = lv_label_create(obj, NULL);	  /*Add a label to the button*/
	  lv_label_set_recolor(label, true);						  /*Enable re-coloring by commands in the text*/
	  lv_label_set_text(label, "PEEP\n(mbar)");					  /*Set the labels text*/
	  lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);

  }
 
 //Fio2 value
   static lv_style_t style_PEEPV;
  
   /**
	* Create a button with a label and react on Click event.
	*/
   void lv_usr_PEEPV_Label(void)
   {
  
	  /*Create a simple button style*/
	  lv_style_init(&style_PEEPV);
	  lv_style_set_radius(&style_PEEPV, LV_STATE_DEFAULT, 1);
	  //	  lv_style_set_bg_opa(&style_PEEPV, LV_STATE_DEFAULT, LV_OPA_COVER);
	  lv_style_set_bg_color(&style_PEEPV, LV_STATE_DEFAULT, LV_COLOR_NAVY);
	  //  lv_style_set_bg_grad_color(&style_PEEPV, LV_STATE_DEFAULT, LV_COLOR_AQUA);
	  //  lv_style_set_bg_grad_dir(&style_PEEPV, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	  
	  /*Swap the colors in pressed state*/
	  lv_style_set_bg_color(&style_PEEPV, LV_STATE_PRESSED, LV_COLOR_NAVY);
	  //  lv_style_set_bg_grad_color(&style_PEEPV, LV_STATE_PRESSED, LV_COLOR_SILVER);
	  lv_style_set_text_color(&style_PEEPV, LV_STATE_DEFAULT, LV_COLOR_WHITE);
	  
	  /*Add a border*/
	  lv_style_set_border_color(&style_PEEPV, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	  //  lv_style_set_border_opa(&style_PEEPV, LV_STATE_DEFAULT, LV_OPA_70);
	  lv_style_set_border_width(&style_PEEPV, LV_STATE_DEFAULT, 1);
  
	  /*Create an object with the new style*/
	  lv_obj_t * obj = lv_obj_create(lv_scr_act(), NULL);
	  lv_obj_add_style(obj, LV_OBJ_PART_MAIN, &style_PEEPV);
	  lv_obj_set_size(obj, LV_LL_PEEPV_LEN,LV_LL_PEEPV_HIGH);
	  lv_obj_set_pos(obj,LV_LL_PEEPV_X,LV_LL_PEEPV_Y);
  
	  lv_obj_t * label = lv_label_create(obj, NULL);	  /*Add a label to the button*/
	  lv_label_set_recolor(label, true);						  /*Enable re-coloring by commands in the text*/
	  lv_label_set_text(label, "00.00");					  /*Set the labels text*/
	  lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
  
  }



 /*------------------------------------------------------------------------------------*/
 /* 									 Tab's View 								   */
 /*------------------------------------------------------------------------------------*/

 
 lv_obj_t *tab1;
 lv_obj_t *tab2;
 lv_obj_t *tab3;
 lv_obj_t *tab4;
 lv_obj_t *tab5;
 
 void lv_ex_tabview_1(void)
 {
     static lv_style_t style;
		
	 lv_style_init(&style);

	 //Remove Boarder of Tab view 
	 lv_style_set_pad_top(&style, LV_STATE_DEFAULT,0);
	 lv_style_set_pad_left(&style, LV_STATE_DEFAULT,0);
	 lv_style_set_pad_right(&style, LV_STATE_DEFAULT,0);
	 lv_style_set_pad_bottom(&style, LV_STATE_DEFAULT, 0);
	 lv_style_set_margin_top(&style, LV_STATE_DEFAULT, 0);
	 lv_style_set_margin_left(&style, LV_STATE_DEFAULT, 0);
	 lv_style_set_margin_right(&style, LV_STATE_DEFAULT, 0);
	 lv_style_set_margin_bottom(&style, LV_STATE_DEFAULT, 0);
	 lv_style_set_pad_inner(&style, LV_STATE_DEFAULT, 0);

 
	 /*Create a Tab view object*/
	 lv_obj_t *tabview;
	 tabview = lv_tabview_create(lv_scr_act(), NULL);

	 lv_tabview_set_anim_time(tabview,10);
	 
	 lv_obj_set_pos(tabview,CHART_X,CHART_Y);
	 lv_obj_set_size(tabview, CHART_SZ_W, CHART_SZ_H);
 
	 lv_obj_set_style_local_text_font (tabview, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, &lv_font_montserrat_6);
 
	 /*Add 5 tabs (the tabs are page (lv_page) and can be scrolled*/
	 tab1 = lv_tabview_add_tab(tabview, "Graph");
	 tab2 = lv_tabview_add_tab(tabview, "Run");
	 tab3 = lv_tabview_add_tab(tabview, "Alarm");
	 tab4 = lv_tabview_add_tab(tabview, "Calib");
	 tab5 = lv_tabview_add_tab(tabview, "About");

	//Remove Tab borders
	lv_obj_add_style(tab1, LV_TABVIEW_PART_BG, &style);
	lv_obj_add_style(tab1, LV_TABVIEW_PART_BG_SCRLLABLE, &style);
	
  
 }
 


 /*------------------------------------------------------------------------------------*/
 /* 									 Graph Tab  								   */
 /*------------------------------------------------------------------------------------*/
 
 
 lv_obj_t * chartTst;
 lv_chart_series_t * s1;
 lv_chart_series_t * s2;
 
 int x = 0;
 int t = 0;
		 
 void create_chart( void )
 {
	 static uint8_t ui8RunStop =1;

	 if(ui8RunStop == 1 )
	{
		chartTst = lv_chart_create(tab1, NULL);

		//lv_obj_set_pos(chartTst,CHART_X,CHART_Y);
		lv_obj_set_size(chartTst, CHART_SZ_W-4, CHART_SZ_H-25);
		lv_obj_set_auto_realign(chartTst,1);
		

		lv_chart_set_point_count(chartTst, 400 );
		lv_chart_set_update_mode(chartTst, LV_CHART_UPDATE_MODE_CIRCULAR);
		lv_chart_set_range(chartTst, 0, 60);
		lv_chart_set_div_line_count(chartTst, 5, 5);


		lv_chart_set_x_tick_length(chartTst,3,0 );
		lv_chart_set_y_tick_length(chartTst,3,0 );

		lv_chart_set_y_tick_texts(chartTst, "0\n10\n20\n30\n40\n50", 10, LV_CHART_AXIS_INVERSE_LABELS_ORDER);
		lv_chart_set_x_tick_texts(chartTst, "0\n10\n20\n30\n40\n50\n60", 10, LV_CHART_AXIS_DRAW_LAST_TICK);

		lv_obj_set_style_local_text_font (chartTst, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, &lv_font_montserrat_8);
		
		lv_obj_set_style_local_pad_top(chartTst, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 5);
		lv_obj_set_style_local_pad_bottom(chartTst, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 19);
		lv_obj_set_style_local_pad_left(chartTst, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 20);
		lv_obj_set_style_local_pad_right(chartTst, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 5);


		//remove point from graph
		lv_obj_set_style_local_size(chartTst, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, 0);


//For Theme Switch
#if 1 //def DARK_THEME
		lv_obj_set_style_local_text_color(chartTst, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);

		//Chart Bck colour
		lv_obj_set_style_local_bg_color(chartTst, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_GRAY);
		//lv_obj_set_style_local_bg_opa(chartTst, LV_CHART_PART_BG, LV_STATE_DEFAULT, LV_OPA_80); /*Max. opa.*/

		//Add Wave Form
		s1 = lv_chart_add_series(chartTst, LV_COLOR_ORANGE);
#else
		lv_obj_set_style_local_text_color(chartTst, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_BLACK);	

		//Chart Bck colour
		lv_obj_set_style_local_bg_color(chartTst, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_SILVER);
		//lv_obj_set_style_local_bg_opa(chartTst, LV_CHART_PART_BG, LV_STATE_DEFAULT, LV_OPA_80); /*Max. opa.*/


		//Add Wave Form
		s1 = lv_chart_add_series(chartTst, LV_COLOR_GREEN);

#endif		

		
		/*Add a faded are effect*/
		lv_obj_set_style_local_bg_opa(chartTst, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_OPA_100); /*Max. opa.*/	 
		lv_obj_set_style_local_bg_grad_dir(chartTst, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
		lv_obj_set_style_local_bg_main_stop(chartTst, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_OPA_100);	  /*Max opa on the top*/
		lv_obj_set_style_local_bg_grad_stop(chartTst, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_OPA_30);	/*Transparent on the bottom*/

		lv_chart_refresh(chartTst); /*Required after direct set*/

 		ui8RunStop =0;

	}
 
	 
 
	 if(t == 0)
	 {
		  lv_chart_set_next(chartTst, s1, sin( x / 180.0 * 3.141) * 15 + 30 );
	 }
	 if( x++ == 360 )
	 {
		 x = 0;
	 }
	 
	 t = 1 - t;

}	 

 /*------------------------------------------------------------------------------------*/
 /* 								 Run Time Table 								   */
 /*------------------------------------------------------------------------------------*/
#define TABLE_ROW 3
#define TABLE_COL 4
#define TABLE_LIMIT 15


void lv_ex_Run_Table(void)
{
	uint8_t cnt = 0;
	static char cBuff[128]={}; 
	static lv_style_t style;
		
	lv_style_init(&style);

	//Remove Boarder of Tab view 
	lv_style_set_pad_top(&style, LV_STATE_DEFAULT,0);
	lv_style_set_pad_left(&style, LV_STATE_DEFAULT,0);
	lv_style_set_pad_right(&style, LV_STATE_DEFAULT,0);
	lv_style_set_pad_bottom(&style, LV_STATE_DEFAULT, 0);
	lv_style_set_margin_top(&style, LV_STATE_DEFAULT, 0);
	lv_style_set_margin_left(&style, LV_STATE_DEFAULT, 0);
	lv_style_set_margin_right(&style, LV_STATE_DEFAULT, 0);
	lv_style_set_margin_bottom(&style, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_inner(&style, LV_STATE_DEFAULT, 0);



	
    lv_obj_t * table = lv_table_create(tab1, NULL);

    lv_table_set_col_cnt(table, TABLE_COL);
    lv_table_set_row_cnt(table, TABLE_ROW);

	//Style
	lv_obj_add_style(table, LV_TABLE_PART_BG, &style);

	//lv_obj_set_size(table, CHART_SZ_W-50, CHART_SZ_H-50);
    //lv_obj_realign(table);
#if 0

    /*Make the cells of the first row center aligned */
    lv_table_set_cell_align(table, 0, 0, LV_LABEL_ALIGN_LEFT);
    lv_table_set_cell_align(table, 0, 1, LV_LABEL_ALIGN_CENTER);

    /*Align the price values to the right in the 2nd column*/
    lv_table_set_cell_align(table, 1, 1, LV_LABEL_ALIGN_CENTER);
    lv_table_set_cell_align(table, 2, 1, LV_LABEL_ALIGN_CENTER);
    lv_table_set_cell_align(table, 3, 1, LV_LABEL_ALIGN_CENTER);

    /*Align the price values to the right in the 2nd column*/
    lv_table_set_cell_align(table, 1, 1, LV_LABEL_ALIGN_CENTER);
    lv_table_set_cell_align(table, 2, 1, LV_LABEL_ALIGN_CENTER);
    lv_table_set_cell_align(table, 3, 1, LV_LABEL_ALIGN_CENTER);
#endif


	lv_obj_set_style_local_text_font (table, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_THEME_DEFAULT_FONT_SMALL);

	lv_table_set_col_width(table, 0, 45);
	lv_table_set_col_width(table, 1, 60);
	lv_table_set_col_width(table, 2, 58);
	lv_table_set_col_width(table, 3, 55);
	
	lv_table_set_cell_crop(table, 0, 0, true);
	lv_table_set_cell_crop(table, 0, 1, true);
	lv_table_set_cell_crop(table, 0, 2, true);
	lv_table_set_cell_crop(table, 0, 3, true);

    /*Fill the first column*/
    lv_table_set_cell_value(table, 0, 0, "SiNo");
    lv_table_set_cell_value(table, 1, 0, "1");
    lv_table_set_cell_value(table, 2, 0, "2");

#if 0		

    lv_table_set_cell_value(table, 3, 0, "3");
#endif


    /*Fill the second column*/
    lv_table_set_cell_value(table, 0, 1, "Date");
	sprintf(cBuff,"%s",__DATE__);
    lv_table_set_cell_value(table, 1, 1, cBuff);

	sprintf(cBuff,"%s",__DATE__);
    lv_table_set_cell_value(table, 2, 1, cBuff);
	
#if 0	
	sprintf(cBuff,"%s",__DATE__);
    lv_table_set_cell_value(table, 3, 1, cBuff);
#endif

    /*Fill the second column*/
    lv_table_set_cell_value(table, 0, 2, "Time");
	sprintf(cBuff,"%s",__TIME__);
    lv_table_set_cell_value(table, 1, 2, cBuff);

	sprintf(cBuff,"%s",__TIME__);
	lv_table_set_cell_value(table, 2, 2, cBuff);

#if 0		
	
	sprintf(cBuff,"%s",__TIME__);
    lv_table_set_cell_value(table, 3, 2, cBuff);
#endif
    /*Fill the second column*/
    lv_table_set_cell_value(table, 0, 3, "Status");
    lv_table_set_cell_value(table, 1, 3, "OFF");
    lv_table_set_cell_value(table, 2, 3, "ON");

#if 0	

    lv_table_set_cell_value(table, 3, 3, "ON");
#endif	
}



extern const lv_img_dsc_t Propel_Chroma_True;
 void Lv_Propel_Logo( void )
 {

	 lv_obj_t * Img_Area = lv_obj_create(lv_scr_act(), NULL);	 /*Add a button the current screen*/

	 lv_obj_set_pos(Img_Area, 40 ,80);				/*Set its position*/
	 lv_obj_set_size(Img_Area,Propel_Chroma_True.header.w,Propel_Chroma_True.header.h);


	 lv_obj_t * icon = lv_img_create(Img_Area, NULL);

	 /*From variable*/
	 lv_img_set_src(icon, &Propel_Chroma_True);

	 HAL_Delay(5000);

	lv_obj_del(Img_Area);

 }
