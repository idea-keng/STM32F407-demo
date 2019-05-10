#ifndef __RPCHER_H
#define __RPCHER_H	

#include "hardfile.h"
	 
//*********************************************************** 
#define rockerkey_GPIO_Pin   	GPIO_Pin_3			    							//����KEY��Ӧ�Ķ˿�
#define rockerkey_GPIO    		GPIOF			    								//����KEY��Ӧ�Ķ˿ڵ�ַ


/*------------------------------------------------*/
/*-------------------------------------------*/	
#ifdef 	rockerkey_GPIO																//�ж�KEY�Ƿ���루������ʹ�ã�

#define rockerkey_H_L    GPIO_ReadInputDataBit(rockerkey_GPIO, rockerkey_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif

void rocher_port_init(void);	//IO��ʼ��
u16 rocker_Get_Adc(u8 ch);
u16 rocker_Get_Adc_Average(u8 ch,u8 times);
void rocker_scanf(void);

#endif
