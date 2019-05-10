#ifndef __MAIN_H
#define __MAIN_H

#include "hardfile.h"

//========================
#define FINISH 1
#define START 0


#define FLASH_SAVE_ADDR  0X08060000 	//设置FLASH 保存地址(必须为偶数，且所在扇区,要大于本代码所占用到的扇区.
										//否则,写操作的时候,可能会导致擦除整个扇区,从而引起部分程序丢失.引起死机.

//========================
extern u8 lcd_page;
extern u8 lcd_page_set;
extern float lcd_arrow_sit[];
extern float lcd_arrow_sit_last[];
extern float parameter_change[];


extern double rocker_x;
extern double rocker_y;
extern float temp0;
extern float temp1;
extern float temp2;
extern float temp3;
extern float temp4;
extern float temp5;
extern float temp6;
extern float temp7;
extern float temp8;
extern float temp9;
extern float temp10;
extern float temp11;
extern float temp12;
extern float temp13;
extern float temp14;
extern float temp15;
extern float temp16;
extern float temp17;
extern float temp18;
extern float temp19;

#endif
