#include "beep.h" 
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK STM32F407������
//��������������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2014/5/3
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	 
    
//BEEP IO��ʼ��
void BEEP_Init(void)
{   
/*------------------------------------------------*/		
#ifdef 	BEEP0_GPIO
	GPIO_InitTypeDef BEEP0_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/	
#ifdef 	BEEP1_GPIO
	GPIO_InitTypeDef BEEP1_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif
/*-------------------------------------------*/		
#ifdef 	BEEP0_GPIO	
	if(BEEP0_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP0_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP0_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP0_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP0_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP0_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP0_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE);	//ʹ���õ���GPIOʱ��
	
	BEEP0_GPIO_InitStructure.GPIO_Pin = BEEP0_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�FMQ��h�ļ����Ѷ������ţ�
	BEEP0_GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;                                //��ͨ���ģʽ
	BEEP0_GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//�������													//�����������
	BEEP0_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	BEEP0_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;//����
	GPIO_Init(BEEP0_GPIO, &BEEP0_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���
	//BEEP0_1;					         																	//����������������Ľӷ����ǵ͵�ƽ���У���˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif
/*------------------------------------------------*/	
#ifdef 	BEEP1_GPIO
	if(BEEP1_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP1_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP1_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP1_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP1_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP1_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);	//ʹ���õ���GPIOʱ��
	if(BEEP1_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE);	//ʹ���õ���GPIOʱ��

	BEEP1_GPIO_InitStructure.GPIO_Pin = BEEP1_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�FMQ��h�ļ����Ѷ������ţ�
	BEEP1_GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;                                //��ͨ���ģʽ
	BEEP1_GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//�������													//�����������
	BEEP1_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	BEEP1_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;//����
	GPIO_Init(BEEP1_GPIO, &BEEP1_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���
	//BEEP1_1;					         																	//����������������Ľӷ����ǵ͵�ƽ���У���˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif

/*------------------------------------------------*/
}






