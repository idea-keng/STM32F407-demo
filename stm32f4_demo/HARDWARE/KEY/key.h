#ifndef __KEY_H
#define __KEY_H	

#include "hardfile.h"
	 
//*********************************************************** 
#define KEY0_GPIO_Pin   	GPIO_Pin_5			    							//定义KEY对应的端口（KEY0）
#define KEY0_GPIO    			GPIOB			    										//定义KEY对应的端口地址（KEY0）
#define KEY1_GPIO_Pin   	GPIO_Pin_6			    							//定义KEY对应的端口（KEY1）
#define KEY1_GPIO    			GPIOB			    										//定义KEY对应的端口地址（KEY1）
#define KEY2_GPIO_Pin   	GPIO_Pin_7			    							//定义KEY对应的端口（KEY2）
#define KEY2_GPIO    			GPIOB			    										//定义KEY对应的端口地址（KEY2）
#define KEY3_GPIO_Pin   	GPIO_Pin_8			    							//定义KEY对应的端口（KEY3）
#define KEY3_GPIO    			GPIOB			    										//定义KEY对应的端口地址（KEY3）
#define KEY4_GPIO_Pin   	GPIO_Pin_9			    							//定义KEY对应的端口（KEY4）
#define KEY4_GPIO    			GPIOB 		    										//定义KEY对应的端口地址（KEY4）
//#define KEY5_GPIO_Pin   	GPIO_Pin_10			    							//定义KEY对应的端口（KEY5）
//#define KEY5_GPIO    			GPIOE			    										//定义KEY对应的端口地址（KEY5）
//#define KEY6_GPIO_Pin   	GPIO_Pin_9			    							//定义KEY对应的端口（KEY6）
//#define KEY6_GPIO    			GPIOE			    										//定义KEY对应的端口地址（KEY6）
//#define KEY7_GPIO_Pin   	GPIO_Pin_8			    							//定义KEY对应的端口（KEY7）
//#define KEY7_GPIO    			GPIOE			    										//定义KEY对应的端口地址（KEY7）
//#define KEY8_GPIO_Pin   	GPIO_Pin_7			    							//定义KEY对应的端口（KEY8）
//#define KEY8_GPIO    			GPIOE			    										//定义KEY对应的端口地址（KEY8）
//#define KEY9_GPIO_Pin   	GPIO_Pin_1		    								//定义KEY对应的端口（KEY9）
//#define KEY9_GPIO    			GPIOG			    										//定义KEY对应的端口地址（KEY9）
//#define KEY10_GPIO_Pin   	GPIO_Pin_12		    								//定义KEY对应的端口（KEY10）//拨码开关
//#define KEY10_GPIO    		GPIOA			    										//定义KEY对应的端口地址（KEY10）
//#define KEY11_GPIO_Pin   	GPIO_Pin_11		    								//定义KEY对应的端口（KEY11）
//#define KEY11_GPIO    		GPIOA			    										//定义KEY对应的端口地址（KEY11）
//#define KEY12_GPIO_Pin   	GPIO_Pin_10		    								//定义KEY对应的端口（KEY12）
//#define KEY12_GPIO    		GPIOA			    										//定义KEY对应的端口地址（KEY12）
//#define KEY13_GPIO_Pin   	GPIO_Pin_9		    								//定义KEY对应的端口（KEY13）
//#define KEY13_GPIO    		GPIOA			    										//定义KEY对应的端口地址（KEY13）
//#define KEY14_GPIO_Pin   	GPIO_Pin_8		    								//定义KEY对应的端口（KEY14）
//#define KEY14_GPIO    		GPIOA			    										//定义KEY对应的端口地址（KEY14）
//#define KEY15_GPIO_Pin   	GPIO_Pin_9		    								//定义KEY对应的端口（KEY15）
//#define KEY15_GPIO    		GPIOC			    										//定义KEY对应的端口地址（KEY15）
//#define KEY16_GPIO_Pin   	GPIO_Pin_8		    								//定义KEY对应的端口（KEY16）
//#define KEY16_GPIO    		GPIOC			    										//定义KEY对应的端口地址（KEY16）
//#define KEY17_GPIO_Pin   	GPIO_Pin_7		    								//定义KEY对应的端口（KEY17）
//#define KEY17_GPIO    		GPIOC			    										//定义KEY对应的端口地址（KEY17）

/*------------------------------------------------*/
/*-------------------------------------------*/	
#ifdef 	KEY0_GPIO																//判断（KEY0）是否编译（即有无使用）

#define KEY0_H_L    GPIO_ReadInputDataBit(KEY0_GPIO, KEY0_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
/*-------------------------------------------*/	
#ifdef 	KEY1_GPIO																//判断（KEY1）是否编译（即有无使用）

#define KEY1_H_L    GPIO_ReadInputDataBit(KEY1_GPIO, KEY1_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/
/*-------------------------------------------*/	
#ifdef 	KEY2_GPIO																//判断（KEY2）是否编译（即有无使用）

#define KEY2_H_L    GPIO_ReadInputDataBit(KEY2_GPIO, KEY2_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
/*-------------------------------------------*/	
#ifdef 	KEY3_GPIO																//判断（KEY3）是否编译（即有无使用）

#define KEY3_H_L    GPIO_ReadInputDataBit(KEY3_GPIO, KEY3_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
/*-------------------------------------------*/	
#ifdef 	KEY4_GPIO																//判断（KEY4）是否编译（即有无使用）

#define KEY4_H_L    GPIO_ReadInputDataBit(KEY4_GPIO, KEY4_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
/*-------------------------------------------*/	
#ifdef 	KEY5_GPIO																//判断（KEY5）是否编译（即有无使用）

#define KEY5_H_L    GPIO_ReadInputDataBit(KEY5_GPIO, KEY5_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY6_GPIO																//判断（KEY6）是否编译（即有无使用）

#define KEY6_H_L    GPIO_ReadInputDataBit(KEY6_GPIO, KEY6_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY7_GPIO																//判断（KEY7）是否编译（即有无使用）

#define KEY7_H_L    GPIO_ReadInputDataBit(KEY7_GPIO, KEY7_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY8_GPIO																//判断（KEY8）是否编译（即有无使用）

#define KEY8_H_L    GPIO_ReadInputDataBit(KEY8_GPIO, KEY8_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY9_GPIO																//判断（KEY9）是否编译（即有无使用）

#define KEY9_H_L    GPIO_ReadInputDataBit(KEY9_GPIO, KEY9_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY10_GPIO																//判断（KEY10）是否编译（即有无使用）

#define KEY10_H_L    GPIO_ReadInputDataBit(KEY10_GPIO, KEY10_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY11_GPIO																//判断（KEY11）是否编译（即有无使用）

#define KEY11_H_L    GPIO_ReadInputDataBit(KEY11_GPIO, KEY11_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY12_GPIO																//判断（KEY12）是否编译（即有无使用）

#define KEY12_H_L    GPIO_ReadInputDataBit(KEY12_GPIO, KEY12_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY13_GPIO																//判断（KEY13）是否编译（即有无使用）

#define KEY13_H_L    GPIO_ReadInputDataBit(KEY13_GPIO, KEY13_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY14_GPIO																//判断（KEY14）是否编译（即有无使用）

#define KEY14_H_L    GPIO_ReadInputDataBit(KEY14_GPIO, KEY14_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY15_GPIO																//判断（KEY15）是否编译（即有无使用）

#define KEY15_H_L    GPIO_ReadInputDataBit(KEY15_GPIO, KEY15_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY16_GPIO																//判断（KEY16）是否编译（即有无使用）

#define KEY16_H_L    GPIO_ReadInputDataBit(KEY16_GPIO, KEY16_GPIO_Pin)   //判断KEY高低电平

#endif
/*-------------------------------------------*/	
#ifdef 	KEY17_GPIO																//判断（KEY17）是否编译（即有无使用）

#define KEY17_H_L    GPIO_ReadInputDataBit(KEY17_GPIO, KEY17_GPIO_Pin)   //判断KEY高低电平

#endif

void KEY_port_init(void);	//IO初始化

#endif
