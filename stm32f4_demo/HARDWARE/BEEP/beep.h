#ifndef __BEEP_H
#define __BEEP_H	 
#include "hardfile.h"


//*********************************************************** 

#define BEEP0_GPIO_Pin   	GPIO_Pin_15			    							//�����������Ӧ�Ķ˿ڣ�BEEP0��
#define BEEP0_GPIO    			GPIOG			    										//�����������Ӧ�Ķ˿ڵ�ַ��BEEP0��
// #define BEEP1_GPIO_Pin   	GPIO_Pin_3			    							//�����������Ӧ�Ķ˿ڣ�BEEP1��
// #define BEEP1_GPIO    			GPIOD			    										//�����������Ӧ�Ķ˿ڵ�ַ��BEEP1��

/*------------------------------------------------*/
#ifdef 	BEEP0_GPIO																//�жϣ�BEEP0���Ƿ���루������ʹ�ã�

#define BEEP0_0 GPIO_ResetBits(BEEP0_GPIO , BEEP0_GPIO_Pin)    	//���������ͣ�BEEP0��
#define BEEP0_1 GPIO_SetBits(BEEP0_GPIO , BEEP0_GPIO_Pin)    		//���������ߣ�BEEP0��

#endif
/*-------------------------------------------*/	
#ifdef 	BEEP1_GPIO																//�жϣ�FMQ1���Ƿ���루������ʹ�ã�

#define BEEP1_0 GPIO_ResetBits(BEEP1_GPIO , BEEP1_GPIO_Pin)    	//���������ͣ�BEEP1��
#define BEEP1_1 GPIO_SetBits(BEEP1_GPIO , BEEP1_GPIO_Pin)    		//���������ߣ�BEEP1��

#endif
/*------------------------------------------------*/

void BEEP_Init(void);//��ʼ��	

#endif

















