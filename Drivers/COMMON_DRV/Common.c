/*
 * Common.c
 *
 *  Created on: Jun 31, 2020
 *      Author: Suresh
 */

/*---------------------------------------INCLUDES ----------------------------------------------------*/
#include "../COMMON_DRV/Common.h"
/*----------------------------------------TYPEDEFS ---------------------------------------------------*/

/*--------------------------------------- DEFINES ----------------------------------------------------*/

/*---------------------------------------- MACROS ----------------------------------------------------*/

/*-------------------------------------- GLOBAL VAR'S ------------------------------------------------*/

char DBGBuff[128] ={0};

/*-------------------------------------- EXT GLOBAL VAR'S --------------------------------------------*/

extern UART_HandleTypeDef huart6;

/*------------------------------------------ FUNC'S --------------------------------------------------*/


void Ventilator_GUI_Init( void ) 
{

	//Show Image
	Lv_Propel_Logo();

	lv_port_indev_init();

		
	//MODE
	lv_usr_Mode_B1();
#if 1

	//Status
	lv_usr_Status_Label();

	//Info
	lv_usr_Info_Label();

	//FIO2
	lv_usr_Fio2_Label();

	//Fio2V
	lv_usr_Fio2V_Label();

	//PIP
	lv_usr_PIP_Label();
	
	//PIPV
	lv_usr_PIPV_Label();

	//Pplat
	lv_usr_Pplat_Label();

	//PplatV
	lv_usr_PplatV_Label();

	//PEEP
	lv_usr_PEEP_Label();

	//PEEPV
	lv_usr_PEEPV_Label();
#endif

	//TV
	lv_usr_TV_B2();
#if 1
	//RR
	lv_usr_RR_B3();
	
	//I:E
	lv_usr_IE_B4();

	//PR_LMIT
	lv_usr_PR_LMT_B5();

	//TRIGGER
	lv_usr_TRIGGER_B6();

	lv_ex_tabview_1();
	
	create_chart();

	//lv_ex_Run_Table();
#endif
}


#if LV_USE_LINE

void lv_ex_line_1(void)
{
    /*Create an array for the points of the line*/
    static lv_point_t line_points[] = { {0, 0}, {10, 0} };

    /*Create style*/
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, LV_STATE_DEFAULT, 1);
    lv_style_set_line_color(&style_line, LV_STATE_DEFAULT, LV_COLOR_BLUE);
    lv_style_set_line_rounded(&style_line, LV_STATE_DEFAULT, true);

    /*Create a line and apply the new style*/
    lv_obj_t * line1;
    line1 = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_points(line1, line_points, 2);     /*Set the points*/
    lv_obj_add_style(line1, LV_LINE_PART_MAIN, &style_line);     /*Set the points*/
    lv_obj_align(line1, NULL, LV_ALIGN_CENTER, 0, 0);
}

#endif

