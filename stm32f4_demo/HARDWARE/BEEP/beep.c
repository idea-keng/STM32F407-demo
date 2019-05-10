#include "beep.h" 
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32F407开发板
//蜂鸣器驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2014/5/3
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	 
    
//BEEP IO初始化
void BEEP_Init(void)
{   
/*------------------------------------------------*/		
#ifdef 	BEEP0_GPIO
	GPIO_InitTypeDef BEEP0_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	BEEP1_GPIO
	GPIO_InitTypeDef BEEP1_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/		
#ifdef 	BEEP0_GPIO	
	if(BEEP0_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);	//使能用到的GPIO时钟
	if(BEEP0_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);	//使能用到的GPIO时钟
	if(BEEP0_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);	//使能用到的GPIO时钟
	if(BEEP0_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);	//使能用到的GPIO时钟
	if(BEEP0_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);	//使能用到的GPIO时钟
	if(BEEP0_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);	//使能用到的GPIO时钟
	if(BEEP0_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE);	//使能用到的GPIO时钟
	
	BEEP0_GPIO_InitStructure.GPIO_Pin = BEEP0_GPIO_Pin;                             	//使能要用到的引脚（FMQ在h文件里已定义引脚）
	BEEP0_GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;                                //普通输出模式
	BEEP0_GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出													//设置推挽输出
	BEEP0_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	BEEP0_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;//下拉
	GPIO_Init(BEEP0_GPIO, &BEEP0_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器
	//BEEP0_1;					         																	//大多数驱动蜂鸣器的接法都是低电平鸣叫，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/	
#ifdef 	BEEP1_GPIO
	if(BEEP1_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);	//使能用到的GPIO时钟
	if(BEEP1_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);	//使能用到的GPIO时钟
	if(BEEP1_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);	//使能用到的GPIO时钟
	if(BEEP1_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);	//使能用到的GPIO时钟
	if(BEEP1_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);	//使能用到的GPIO时钟
	if(BEEP1_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);	//使能用到的GPIO时钟
	if(BEEP1_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE);	//使能用到的GPIO时钟

	BEEP1_GPIO_InitStructure.GPIO_Pin = BEEP1_GPIO_Pin;                             	//使能要用到的引脚（FMQ在h文件里已定义引脚）
	BEEP1_GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;                                //普通输出模式
	BEEP1_GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出													//设置推挽输出
	BEEP1_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	BEEP1_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;//下拉
	GPIO_Init(BEEP1_GPIO, &BEEP1_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器
	//BEEP1_1;					         																	//大多数驱动蜂鸣器的接法都是低电平鸣叫，因此初始拉高，可省略，这里注释掉，
#endif

/*------------------------------------------------*/
}






