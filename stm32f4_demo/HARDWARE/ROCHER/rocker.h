#ifndef __RPCHER_H
#define __RPCHER_H	

#include "hardfile.h"
	 
//*********************************************************** 
#define rockerkey_GPIO_Pin   	GPIO_Pin_3			    							//定义KEY对应的端口
#define rockerkey_GPIO    		GPIOF			    								//定义KEY对应的端口地址


/*------------------------------------------------*/
/*-------------------------------------------*/	
#ifdef 	rockerkey_GPIO																//判断KEY是否编译（即有无使用）

#define rockerkey_H_L    GPIO_ReadInputDataBit(rockerkey_GPIO, rockerkey_GPIO_Pin)   //判断KEY高低电平

#endif

void rocher_port_init(void);	//IO初始化
u16 rocker_Get_Adc(u8 ch);
u16 rocker_Get_Adc_Average(u8 ch,u8 times);
void rocker_scanf(void);

#endif
