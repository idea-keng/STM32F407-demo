#include "key.h"

//�������ų�ʼ������
void KEY_port_init(void)
{
/*------------------------------------------------*/		
#ifdef 	KEY0_GPIO
	GPIO_InitTypeDef KEY0_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY1_GPIO
	GPIO_InitTypeDef KEY1_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/		
#ifdef 	KEY2_GPIO
	GPIO_InitTypeDef KEY2_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/		
#ifdef 	KEY3_GPIO
	GPIO_InitTypeDef KEY3_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/		
#ifdef 	KEY4_GPIO
	GPIO_InitTypeDef KEY4_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/		
#ifdef 	KEY5_GPIO
	GPIO_InitTypeDef KEY5_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/		
#ifdef 	KEY6_GPIO
	GPIO_InitTypeDef KEY6_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY7_GPIO
	GPIO_InitTypeDef KEY7_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY8_GPIO
	GPIO_InitTypeDef KEY8_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY9_GPIO
	GPIO_InitTypeDef KEY9_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY10_GPIO
	GPIO_InitTypeDef KEY10_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY11_GPIO
	GPIO_InitTypeDef KEY11_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY12_GPIO
	GPIO_InitTypeDef KEY12_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY13_GPIO
	GPIO_InitTypeDef KEY13_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY14_GPIO
	GPIO_InitTypeDef KEY14_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY15_GPIO
	GPIO_InitTypeDef KEY15_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY16_GPIO
	GPIO_InitTypeDef KEY16_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	KEY17_GPIO
	GPIO_InitTypeDef KEY17_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	

#ifdef 	KEY0_GPIO	
	if(KEY0_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY0_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY0_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY0_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY0_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY0_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY0_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY0_GPIO_InitStructure.GPIO_Pin = KEY0_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY0_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY0_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY0_GPIO, &KEY0_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY0_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/	
#ifdef 	KEY1_GPIO
	if(KEY1_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY1_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY1_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY1_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY1_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY1_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY1_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY1_GPIO_InitStructure.GPIO_Pin = KEY1_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY1_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY1_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY1_GPIO, &KEY1_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY1_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY2_GPIO
	if(KEY2_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY2_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY2_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY2_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY2_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY2_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY2_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY2_GPIO_InitStructure.GPIO_Pin = KEY2_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY2_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY2_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY2_GPIO, &KEY2_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY2_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY3_GPIO
	if(KEY3_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY3_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY3_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY3_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY3_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY3_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY3_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY3_GPIO_InitStructure.GPIO_Pin = KEY3_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY3_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY3_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;														//������������
	GPIO_Init(KEY3_GPIO, &KEY3_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY3_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY4_GPIO
	if(KEY4_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY4_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY4_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY4_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY4_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY4_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY4_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY4_GPIO_InitStructure.GPIO_Pin = KEY4_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY4_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY4_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;												  		//������������
	GPIO_Init(KEY4_GPIO, &KEY4_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY4_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY5_GPIO
	if(KEY5_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY5_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY5_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY5_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY5_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY5_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY5_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY5_GPIO_InitStructure.GPIO_Pin = KEY5_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY5_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY5_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY5_GPIO, &KEY5_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY6_GPIO
	if(KEY6_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY6_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY6_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY6_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY6_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY6_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY6_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY6_GPIO_InitStructure.GPIO_Pin = KEY6_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY6_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY6_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY6_GPIO, &KEY6_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY7_GPIO
	if(KEY7_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY7_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY7_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY7_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY7_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY7_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY7_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY7_GPIO_InitStructure.GPIO_Pin = KEY7_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY7_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY7_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY7_GPIO, &KEY7_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY8_GPIO
	if(KEY8_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY8_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY8_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY8_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY8_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY8_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY8_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY8_GPIO_InitStructure.GPIO_Pin = KEY8_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY8_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY8_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY8_GPIO, &KEY8_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY9_GPIO
	if(KEY9_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY9_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY9_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY9_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY9_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY9_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY9_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY9_GPIO_InitStructure.GPIO_Pin = KEY9_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY9_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY9_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY9_GPIO, &KEY9_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY10_GPIO
	if(KEY10_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY10_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY10_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY10_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY10_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY10_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY10_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY10_GPIO_InitStructure.GPIO_Pin = KEY10_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY10_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY10_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;														//������������
	GPIO_Init(KEY10_GPIO, &KEY10_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY11_GPIO
	if(KEY11_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY11_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY11_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY11_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY11_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY11_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY11_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY11_GPIO_InitStructure.GPIO_Pin = KEY11_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY11_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY11_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY11_GPIO, &KEY11_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY12_GPIO
	if(KEY12_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY12_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY12_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY12_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY12_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY12_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY12_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY12_GPIO_InitStructure.GPIO_Pin = KEY12_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY12_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY12_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY12_GPIO, &KEY12_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY13_GPIO
	if(KEY13_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY13_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY13_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY13_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY13_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY13_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY13_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY13_GPIO_InitStructure.GPIO_Pin = KEY13_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY13_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY13_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY13_GPIO, &KEY13_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY14_GPIO
	if(KEY14_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY14_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY14_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY14_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY14_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY14_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY14_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY14_GPIO_InitStructure.GPIO_Pin = KEY14_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY14_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY14_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY14_GPIO, &KEY14_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY15_GPIO
	if(KEY15_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY15_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY15_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY15_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY15_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY15_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY15_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY15_GPIO_InitStructure.GPIO_Pin = KEY15_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY15_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY15_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY15_GPIO, &KEY15_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY16_GPIO
	if(KEY16_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY16_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY16_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY16_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY16_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY16_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY16_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY16_GPIO_InitStructure.GPIO_Pin = KEY16_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY16_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY16_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY16_GPIO, &KEY16_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/
#ifdef 	KEY17_GPIO
	if(KEY17_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY17_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY17_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY17_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY17_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY17_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(KEY17_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	KEY17_GPIO_InitStructure.GPIO_Pin = KEY17_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	KEY17_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	KEY17_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(KEY17_GPIO, &KEY17_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY5_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/

}





















