#ifndef __BEEP_H
#define __BEEP_H	 
#include "hardfile.h"


//*********************************************************** 

#define BEEP0_GPIO_Pin   	GPIO_Pin_15			    							//定义蜂鸣器对应的端口（BEEP0）
#define BEEP0_GPIO    			GPIOG			    										//定义蜂鸣器对应的端口地址（BEEP0）
// #define BEEP1_GPIO_Pin   	GPIO_Pin_3			    							//定义蜂鸣器对应的端口（BEEP1）
// #define BEEP1_GPIO    			GPIOD			    										//定义蜂鸣器对应的端口地址（BEEP1）

/*------------------------------------------------*/
#ifdef 	BEEP0_GPIO																//判断（BEEP0）是否编译（即有无使用）

#define BEEP0_0 GPIO_ResetBits(BEEP0_GPIO , BEEP0_GPIO_Pin)    	//蜂鸣器拉低（BEEP0）
#define BEEP0_1 GPIO_SetBits(BEEP0_GPIO , BEEP0_GPIO_Pin)    		//蜂鸣器拉高（BEEP0）

#endif
/*-------------------------------------------*/	
#ifdef 	BEEP1_GPIO																//判断（FMQ1）是否编译（即有无使用）

#define BEEP1_0 GPIO_ResetBits(BEEP1_GPIO , BEEP1_GPIO_Pin)    	//蜂鸣器拉低（BEEP1）
#define BEEP1_1 GPIO_SetBits(BEEP1_GPIO , BEEP1_GPIO_Pin)    		//蜂鸣器拉高（BEEP1）

#endif
/*------------------------------------------------*/

void BEEP_Init(void);//初始化	

#endif

















