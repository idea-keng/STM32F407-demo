#include "key.h"

//按键引脚初始化函数
void KEY_port_init(void)
{
/*------------------------------------------------*/		
#ifdef 	KEY0_GPIO
	GPIO_InitTypeDef KEY0_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY1_GPIO
	GPIO_InitTypeDef KEY1_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/		
#ifdef 	KEY2_GPIO
	GPIO_InitTypeDef KEY2_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/		
#ifdef 	KEY3_GPIO
	GPIO_InitTypeDef KEY3_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/		
#ifdef 	KEY4_GPIO
	GPIO_InitTypeDef KEY4_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/		
#ifdef 	KEY5_GPIO
	GPIO_InitTypeDef KEY5_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/		
#ifdef 	KEY6_GPIO
	GPIO_InitTypeDef KEY6_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY7_GPIO
	GPIO_InitTypeDef KEY7_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY8_GPIO
	GPIO_InitTypeDef KEY8_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY9_GPIO
	GPIO_InitTypeDef KEY9_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY10_GPIO
	GPIO_InitTypeDef KEY10_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY11_GPIO
	GPIO_InitTypeDef KEY11_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY12_GPIO
	GPIO_InitTypeDef KEY12_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY13_GPIO
	GPIO_InitTypeDef KEY13_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY14_GPIO
	GPIO_InitTypeDef KEY14_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY15_GPIO
	GPIO_InitTypeDef KEY15_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY16_GPIO
	GPIO_InitTypeDef KEY16_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	
#ifdef 	KEY17_GPIO
	GPIO_InitTypeDef KEY17_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif
/*-------------------------------------------*/	

#ifdef 	KEY0_GPIO	
	if(KEY0_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY0_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY0_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY0_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY0_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY0_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY0_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY0_GPIO_InitStructure.GPIO_Pin = KEY0_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY0_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY0_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY0_GPIO, &KEY0_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY0_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/	
#ifdef 	KEY1_GPIO
	if(KEY1_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY1_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY1_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY1_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY1_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY1_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY1_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY1_GPIO_InitStructure.GPIO_Pin = KEY1_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY1_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY1_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY1_GPIO, &KEY1_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY1_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY2_GPIO
	if(KEY2_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY2_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY2_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY2_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY2_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY2_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY2_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY2_GPIO_InitStructure.GPIO_Pin = KEY2_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY2_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY2_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY2_GPIO, &KEY2_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY2_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY3_GPIO
	if(KEY3_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY3_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY3_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY3_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY3_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY3_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY3_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY3_GPIO_InitStructure.GPIO_Pin = KEY3_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY3_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY3_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;														//设置上拉输入
	GPIO_Init(KEY3_GPIO, &KEY3_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY3_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY4_GPIO
	if(KEY4_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY4_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY4_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY4_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY4_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY4_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY4_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY4_GPIO_InitStructure.GPIO_Pin = KEY4_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY4_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY4_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;												  		//设置上拉输入
	GPIO_Init(KEY4_GPIO, &KEY4_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY4_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY5_GPIO
	if(KEY5_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY5_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY5_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY5_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY5_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY5_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY5_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY5_GPIO_InitStructure.GPIO_Pin = KEY5_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY5_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY5_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY5_GPIO, &KEY5_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY6_GPIO
	if(KEY6_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY6_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY6_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY6_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY6_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY6_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY6_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY6_GPIO_InitStructure.GPIO_Pin = KEY6_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY6_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY6_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY6_GPIO, &KEY6_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY7_GPIO
	if(KEY7_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY7_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY7_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY7_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY7_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY7_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY7_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY7_GPIO_InitStructure.GPIO_Pin = KEY7_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY7_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY7_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY7_GPIO, &KEY7_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY8_GPIO
	if(KEY8_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY8_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY8_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY8_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY8_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY8_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY8_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY8_GPIO_InitStructure.GPIO_Pin = KEY8_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY8_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY8_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY8_GPIO, &KEY8_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY9_GPIO
	if(KEY9_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY9_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY9_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY9_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY9_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY9_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY9_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY9_GPIO_InitStructure.GPIO_Pin = KEY9_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY9_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY9_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY9_GPIO, &KEY9_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY10_GPIO
	if(KEY10_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY10_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY10_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY10_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY10_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY10_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY10_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY10_GPIO_InitStructure.GPIO_Pin = KEY10_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY10_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY10_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;														//设置上拉输入
	GPIO_Init(KEY10_GPIO, &KEY10_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY11_GPIO
	if(KEY11_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY11_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY11_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY11_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY11_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY11_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY11_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY11_GPIO_InitStructure.GPIO_Pin = KEY11_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY11_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY11_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY11_GPIO, &KEY11_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY12_GPIO
	if(KEY12_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY12_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY12_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY12_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY12_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY12_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY12_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY12_GPIO_InitStructure.GPIO_Pin = KEY12_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY12_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY12_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY12_GPIO, &KEY12_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY13_GPIO
	if(KEY13_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY13_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY13_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY13_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY13_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY13_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY13_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY13_GPIO_InitStructure.GPIO_Pin = KEY13_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY13_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY13_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY13_GPIO, &KEY13_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY14_GPIO
	if(KEY14_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY14_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY14_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY14_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY14_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY14_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY14_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY14_GPIO_InitStructure.GPIO_Pin = KEY14_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY14_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY14_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY14_GPIO, &KEY14_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY15_GPIO
	if(KEY15_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY15_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY15_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY15_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY15_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY15_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY15_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY15_GPIO_InitStructure.GPIO_Pin = KEY15_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY15_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY15_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY15_GPIO, &KEY15_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY16_GPIO
	if(KEY16_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY16_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY16_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY16_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY16_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY16_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY16_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY16_GPIO_InitStructure.GPIO_Pin = KEY16_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY16_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY16_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY16_GPIO, &KEY16_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/
#ifdef 	KEY17_GPIO
	if(KEY17_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(KEY17_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(KEY17_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(KEY17_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(KEY17_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(KEY17_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(KEY17_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	KEY17_GPIO_InitStructure.GPIO_Pin = KEY17_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	KEY17_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	KEY17_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(KEY17_GPIO, &KEY17_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY5_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif
/*------------------------------------------------*/

}





















