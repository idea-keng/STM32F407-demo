#ifndef __KEY_H
#define __KEY_H	

#include "hardfile.h"
	 
//*********************************************************** 
#define KEY0_GPIO_Pin   	GPIO_Pin_5			    							//����KEY��Ӧ�Ķ˿ڣ�KEY0��
#define KEY0_GPIO    			GPIOB			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY0��
#define KEY1_GPIO_Pin   	GPIO_Pin_6			    							//����KEY��Ӧ�Ķ˿ڣ�KEY1��
#define KEY1_GPIO    			GPIOB			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY1��
#define KEY2_GPIO_Pin   	GPIO_Pin_7			    							//����KEY��Ӧ�Ķ˿ڣ�KEY2��
#define KEY2_GPIO    			GPIOB			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY2��
#define KEY3_GPIO_Pin   	GPIO_Pin_8			    							//����KEY��Ӧ�Ķ˿ڣ�KEY3��
#define KEY3_GPIO    			GPIOB			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY3��
#define KEY4_GPIO_Pin   	GPIO_Pin_9			    							//����KEY��Ӧ�Ķ˿ڣ�KEY4��
#define KEY4_GPIO    			GPIOB 		    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY4��
//#define KEY5_GPIO_Pin   	GPIO_Pin_10			    							//����KEY��Ӧ�Ķ˿ڣ�KEY5��
//#define KEY5_GPIO    			GPIOE			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY5��
//#define KEY6_GPIO_Pin   	GPIO_Pin_9			    							//����KEY��Ӧ�Ķ˿ڣ�KEY6��
//#define KEY6_GPIO    			GPIOE			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY6��
//#define KEY7_GPIO_Pin   	GPIO_Pin_8			    							//����KEY��Ӧ�Ķ˿ڣ�KEY7��
//#define KEY7_GPIO    			GPIOE			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY7��
//#define KEY8_GPIO_Pin   	GPIO_Pin_7			    							//����KEY��Ӧ�Ķ˿ڣ�KEY8��
//#define KEY8_GPIO    			GPIOE			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY8��
//#define KEY9_GPIO_Pin   	GPIO_Pin_1		    								//����KEY��Ӧ�Ķ˿ڣ�KEY9��
//#define KEY9_GPIO    			GPIOG			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY9��
//#define KEY10_GPIO_Pin   	GPIO_Pin_12		    								//����KEY��Ӧ�Ķ˿ڣ�KEY10��//���뿪��
//#define KEY10_GPIO    		GPIOA			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY10��
//#define KEY11_GPIO_Pin   	GPIO_Pin_11		    								//����KEY��Ӧ�Ķ˿ڣ�KEY11��
//#define KEY11_GPIO    		GPIOA			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY11��
//#define KEY12_GPIO_Pin   	GPIO_Pin_10		    								//����KEY��Ӧ�Ķ˿ڣ�KEY12��
//#define KEY12_GPIO    		GPIOA			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY12��
//#define KEY13_GPIO_Pin   	GPIO_Pin_9		    								//����KEY��Ӧ�Ķ˿ڣ�KEY13��
//#define KEY13_GPIO    		GPIOA			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY13��
//#define KEY14_GPIO_Pin   	GPIO_Pin_8		    								//����KEY��Ӧ�Ķ˿ڣ�KEY14��
//#define KEY14_GPIO    		GPIOA			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY14��
//#define KEY15_GPIO_Pin   	GPIO_Pin_9		    								//����KEY��Ӧ�Ķ˿ڣ�KEY15��
//#define KEY15_GPIO    		GPIOC			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY15��
//#define KEY16_GPIO_Pin   	GPIO_Pin_8		    								//����KEY��Ӧ�Ķ˿ڣ�KEY16��
//#define KEY16_GPIO    		GPIOC			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY16��
//#define KEY17_GPIO_Pin   	GPIO_Pin_7		    								//����KEY��Ӧ�Ķ˿ڣ�KEY17��
//#define KEY17_GPIO    		GPIOC			    										//����KEY��Ӧ�Ķ˿ڵ�ַ��KEY17��

/*------------------------------------------------*/
/*-------------------------------------------*/	
#ifdef 	KEY0_GPIO																//�жϣ�KEY0���Ƿ���루������ʹ�ã�

#define KEY0_H_L    GPIO_ReadInputDataBit(KEY0_GPIO, KEY0_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
/*-------------------------------------------*/	
#ifdef 	KEY1_GPIO																//�жϣ�KEY1���Ƿ���루������ʹ�ã�

#define KEY1_H_L    GPIO_ReadInputDataBit(KEY1_GPIO, KEY1_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/
/*-------------------------------------------*/	
#ifdef 	KEY2_GPIO																//�жϣ�KEY2���Ƿ���루������ʹ�ã�

#define KEY2_H_L    GPIO_ReadInputDataBit(KEY2_GPIO, KEY2_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
/*-------------------------------------------*/	
#ifdef 	KEY3_GPIO																//�жϣ�KEY3���Ƿ���루������ʹ�ã�

#define KEY3_H_L    GPIO_ReadInputDataBit(KEY3_GPIO, KEY3_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
/*-------------------------------------------*/	
#ifdef 	KEY4_GPIO																//�жϣ�KEY4���Ƿ���루������ʹ�ã�

#define KEY4_H_L    GPIO_ReadInputDataBit(KEY4_GPIO, KEY4_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
/*-------------------------------------------*/	
#ifdef 	KEY5_GPIO																//�жϣ�KEY5���Ƿ���루������ʹ�ã�

#define KEY5_H_L    GPIO_ReadInputDataBit(KEY5_GPIO, KEY5_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY6_GPIO																//�жϣ�KEY6���Ƿ���루������ʹ�ã�

#define KEY6_H_L    GPIO_ReadInputDataBit(KEY6_GPIO, KEY6_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY7_GPIO																//�жϣ�KEY7���Ƿ���루������ʹ�ã�

#define KEY7_H_L    GPIO_ReadInputDataBit(KEY7_GPIO, KEY7_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY8_GPIO																//�жϣ�KEY8���Ƿ���루������ʹ�ã�

#define KEY8_H_L    GPIO_ReadInputDataBit(KEY8_GPIO, KEY8_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY9_GPIO																//�жϣ�KEY9���Ƿ���루������ʹ�ã�

#define KEY9_H_L    GPIO_ReadInputDataBit(KEY9_GPIO, KEY9_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY10_GPIO																//�жϣ�KEY10���Ƿ���루������ʹ�ã�

#define KEY10_H_L    GPIO_ReadInputDataBit(KEY10_GPIO, KEY10_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY11_GPIO																//�жϣ�KEY11���Ƿ���루������ʹ�ã�

#define KEY11_H_L    GPIO_ReadInputDataBit(KEY11_GPIO, KEY11_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY12_GPIO																//�жϣ�KEY12���Ƿ���루������ʹ�ã�

#define KEY12_H_L    GPIO_ReadInputDataBit(KEY12_GPIO, KEY12_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY13_GPIO																//�жϣ�KEY13���Ƿ���루������ʹ�ã�

#define KEY13_H_L    GPIO_ReadInputDataBit(KEY13_GPIO, KEY13_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY14_GPIO																//�жϣ�KEY14���Ƿ���루������ʹ�ã�

#define KEY14_H_L    GPIO_ReadInputDataBit(KEY14_GPIO, KEY14_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY15_GPIO																//�жϣ�KEY15���Ƿ���루������ʹ�ã�

#define KEY15_H_L    GPIO_ReadInputDataBit(KEY15_GPIO, KEY15_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY16_GPIO																//�жϣ�KEY16���Ƿ���루������ʹ�ã�

#define KEY16_H_L    GPIO_ReadInputDataBit(KEY16_GPIO, KEY16_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif
/*-------------------------------------------*/	
#ifdef 	KEY17_GPIO																//�жϣ�KEY17���Ƿ���루������ʹ�ã�

#define KEY17_H_L    GPIO_ReadInputDataBit(KEY17_GPIO, KEY17_GPIO_Pin)   //�ж�KEY�ߵ͵�ƽ

#endif

void KEY_port_init(void);	//IO��ʼ��

#endif
