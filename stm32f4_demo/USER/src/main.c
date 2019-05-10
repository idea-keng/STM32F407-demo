#include "stm32f4xx.h"
#include "main.h"
#include "hardfile.h"

//============================
u8 lcd_page=1;
u8 lcd_page_set=START;
float lcd_arrow_sit[2]={0,0};
float lcd_arrow_sit_last[2]={0,0};
float parameter_change[3]={0,0,0};


double rocker_x;
double rocker_y;
float temp0;
float temp1;
float temp2;
float temp3;
float temp4;
float temp5;
float temp6;
float temp7;
float temp8;
float temp9;
float temp10;
float temp11;
float temp12;
float temp13;
float temp14;
float temp15;
float temp16;
float temp17;
float temp18;
float temp19;

//============================
//          Ö÷º¯Êý
//±¸×¢£º
//============================
int main(void)
{ 

	all_init();
		 	
  	while(1) 
	{	
		rocker_scanf();
		key_scanf();
		lcd_display();
		run_led();	
	} 
}
