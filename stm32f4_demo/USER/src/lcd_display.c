#include "lcd_display.h"
#include "lcd_bmp.h"

//=======================================
//LCD屏尺寸为480*800
//0~150 为标题 别问，问就是闲的慌。
//=======================================
void lcd_display(void)
{
	switch(lcd_page)
	{
		case 1:
			if(lcd_page_set==START){
				lcd_display_title();
				lcd_page_set=FINISH;
			}
			break;
		case 2:
			if(lcd_page_set==START){
				LCD_ShowString(24,32,72,24,24,"temp0:");LCD_ShowString(264,32,72,24,24,"temp10:");
				LCD_ShowString(24,56,72,24,24,"temp1:");LCD_ShowString(264,56,72,24,24,"temp11:");
				LCD_ShowString(24,80,72,24,24,"temp2:");LCD_ShowString(264,80,72,24,24,"temp12:");
				LCD_ShowString(24,104,72,24,24,"temp3:");LCD_ShowString(264,104,72,24,24,"temp13:");
				LCD_ShowString(24,128,72,24,24,"temp4:");LCD_ShowString(264,128,72,24,24,"temp14:");
				LCD_ShowString(24,152,72,24,24,"temp5:");LCD_ShowString(264,152,72,24,24,"temp15:");
				LCD_ShowString(24,176,72,24,24,"temp6:");LCD_ShowString(264,176,72,24,24,"temp16:");
				LCD_ShowString(24,200,72,24,24,"temp7:");LCD_ShowString(264,200,72,24,24,"temp17:");
				LCD_ShowString(24,224,72,24,24,"temp8:");LCD_ShowString(264,224,72,24,24,"temp18:");
				LCD_ShowString(24,248,72,24,24,"temp9:");LCD_ShowString(264,248,72,24,24,"temp19:");
				
				LCD_Showfloat(120,32,temp0,2,4,24,0);LCD_Showfloat(360,32,temp10,2,4,24,0);
				LCD_Showfloat(120,56,temp1,2,4,24,0);LCD_Showfloat(360,56,temp11,2,4,24,0);
				LCD_Showfloat(120,80,temp2,2,4,24,0);LCD_Showfloat(360,80,temp12,2,4,24,0);
				LCD_Showfloat(120,104,temp3,2,4,24,0);LCD_Showfloat(360,104,temp13,2,4,24,0);
				LCD_Showfloat(120,128,temp4,2,4,24,0);LCD_Showfloat(360,128,temp14,2,4,24,0);
				LCD_Showfloat(120,152,temp5,2,4,24,0);LCD_Showfloat(360,152,temp15,2,4,24,0);
				LCD_Showfloat(120,176,temp6,2,4,24,0);LCD_Showfloat(360,176,temp16,2,4,24,0);
				LCD_Showfloat(120,200,temp7,2,4,24,0);LCD_Showfloat(360,200,temp17,2,4,24,0);
				LCD_Showfloat(120,224,temp8,2,4,24,0);LCD_Showfloat(360,224,temp18,2,4,24,0);
				LCD_Showfloat(120,248,temp9,2,4,24,0);LCD_Showfloat(360,248,temp19,2,4,24,0);
				lcd_page_set=FINISH;
			}
			
			LCD_ShowString(0+lcd_arrow_sit_last[0]*240,32+lcd_arrow_sit_last[1]*24,24,24,24,"  ");
			POINT_COLOR=RED;
			LCD_ShowString(0+lcd_arrow_sit[0]*240,32+lcd_arrow_sit[1]*24,24,24,24,"=>");
			POINT_COLOR=BLACK;
			
			if(parameter_change[2]==1){
				LCD_Showfloat(120+(((20-parameter_change[0])>10)?0:1)*240,32+(parameter_change[0]-(((20-parameter_change[0])>10)?0:1)*10)*24,parameter_change[1],2,4,24,0);
				parameter_change[2]=0;
			}
			
			break;
		default:break;		
	}
}

void lcd_display_title(void)
{
	int chstr_1[]={0,3,4,5};//颜铿洋
	int chstr_2[]={2,3};//版本	
	LCD_Show_bmp(0,0,150,150,gImage_warframe); 
	LCD_Show_chstr(168,18,32,chstr_1,4);
	LCD_ShowString(296,26,84,24,24,"STM32F4");
	LCD_Show_chstr(238,82,16,chstr_2,2);
	LCD_ShowString(270,82,142,16,16,":V1.03   2019/3/30");
}


