#include "rocker.h"

//�������ų�ʼ������
void rocher_port_init(void)
{	
#ifdef 	rockerkey_GPIO
	GPIO_InitTypeDef rockerkey_GPIO_InitStructure;	   																	//����һ��GPIO�Ľṹ��
#endif


#ifdef 	KEY0_GPIO	
	if(rockerkey_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//ʹ���õ���GPIOʱ��
	if(rockerkey_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//ʹ���õ���GPIOʱ��
	if(rockerkey_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//ʹ���õ���GPIOʱ��
	if(rockerkey_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//ʹ���õ���GPIOʱ��
	if(rockerkey_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//ʹ���õ���GPIOʱ��
	if(rockerkey_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//ʹ���õ���GPIOʱ��
	if(rockerkey_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//ʹ���õ���GPIOʱ��

	rockerkey_GPIO_InitStructure.GPIO_Pin = rockerkey_GPIO_Pin;                             	//ʹ��Ҫ�õ������ţ�KEY��h�ļ����Ѷ������ţ�
	rockerkey_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;													//����GPIOʱ���ٶȣ�2M��10M��50M��ѡ��
	rockerkey_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//������������
	GPIO_Init(rockerkey_GPIO, &rockerkey_GPIO_InitStructure);																	//����ܵĳ�ʼ���õ���GPIO��д��Ĵ���	//KEY0_1;					         																	//���������KEY�Ľӷ����ǵ͵�ƽ��������˳�ʼ���ߣ���ʡ�ԣ�����ע�͵���
#endif

	GPIO_InitTypeDef  GPIO_InitStructure;
	ADC_CommonInitTypeDef ADC_CommonInitStructure;
	ADC_InitTypeDef       ADC_InitStructure;
		
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);//ʹ��GPIOAʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC3, ENABLE); //ʹ��ADC1ʱ��

	//�ȳ�ʼ��ADC1ͨ��5 IO��
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5;//
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;//ģ������
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL ;//����������
	GPIO_Init(GPIOF, &GPIO_InitStructure);//��ʼ��  
	 
	RCC_APB2PeriphResetCmd(RCC_APB2Periph_ADC3,ENABLE);	  //ADC1��λ
	RCC_APB2PeriphResetCmd(RCC_APB2Periph_ADC3,DISABLE);	//��λ����	 
	 
		
	ADC_CommonInitStructure.ADC_Mode = ADC_Mode_Independent;//����ģʽ
	ADC_CommonInitStructure.ADC_TwoSamplingDelay = ADC_TwoSamplingDelay_5Cycles;//���������׶�֮����ӳ�5��ʱ��
	ADC_CommonInitStructure.ADC_DMAAccessMode = ADC_DMAAccessMode_Disabled; //DMAʧ��
	ADC_CommonInitStructure.ADC_Prescaler = ADC_Prescaler_Div4;//Ԥ��Ƶ4��Ƶ��ADCCLK=PCLK2/4=84/4=21Mhz,ADCʱ����ò�Ҫ����36Mhz 
	ADC_CommonInit(&ADC_CommonInitStructure);//��ʼ��
		 
	ADC_InitStructure.ADC_Resolution = ADC_Resolution_12b;//12λģʽ
	ADC_InitStructure.ADC_ScanConvMode = DISABLE;//��ɨ��ģʽ	
	ADC_InitStructure.ADC_ContinuousConvMode = DISABLE;//�ر�����ת��
	ADC_InitStructure.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;//��ֹ������⣬ʹ���������
	ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;//�Ҷ���	
	ADC_InitStructure.ADC_NbrOfConversion = 1;//1��ת���ڹ��������� Ҳ����ֻת����������1 
	ADC_Init(ADC3, &ADC_InitStructure);//ADC��ʼ��
		
	 
	ADC_Cmd(ADC3, ENABLE);//����ADת����
}

//���ADCֵ
u16 rocker_Get_Adc(u8 ch)   
{
	  	//����ָ��ADC�Ĺ�����ͨ����һ�����У�����ʱ��
	ADC_RegularChannelConfig(ADC3, ch, 1, ADC_SampleTime_480Cycles );	//ADC3,ADCͨ��,480������,��߲���ʱ�������߾�ȷ��			    
  
	ADC_SoftwareStartConv(ADC3);		//ʹ��ָ����ADC3�����ת����������	
	 
	while(!ADC_GetFlagStatus(ADC3, ADC_FLAG_EOC ));//�ȴ�ת������

	return ADC_GetConversionValue(ADC3);	//�������һ��ADC3�������ת�����
}
//��ȡͨ��ch��ת��ֵ��ȡtimes��,Ȼ��ƽ�� 
//ch:ͨ�����
//times:��ȡ����
//����ֵ:ͨ��ch��times��ת�����ƽ��ֵ
u16 rocker_Get_Adc_Average(u8 ch,u8 times)
{
	u32 temp_val=0;
	u8 t;
	for(t=0;t<times;t++)
	{
		temp_val+=rocker_Get_Adc(ch);
		delay_ms(1);
	}
	return temp_val/times;
} 

void rocker_scanf(void)
{
	u16 adc_x,adc_y;

	
	if(lcd_page==2)
	{
		adc_y=rocker_Get_Adc_Average(ADC_Channel_14,3);
		adc_x=rocker_Get_Adc_Average(ADC_Channel_15,3);
		rocker_x=(float)adc_x*(3.3/4096);
		rocker_y=(float)adc_y*(3.3/4096);
		
		if(rocker_x<=0.5)
		{
			delay_ms(2);
			if(rocker_x<=0.5)
			{
				lcd_arrow_sit_last[0]=lcd_arrow_sit[0];
				lcd_arrow_sit_last[1]=lcd_arrow_sit[1];
				lcd_arrow_sit[0]++;
				if(lcd_arrow_sit[0]>1)lcd_arrow_sit[0]=1;
				return;
			}
		}
		
		if(rocker_x>=3)
		{
			delay_ms(2);
			if(rocker_x>=3)
			{
				lcd_arrow_sit_last[0]=lcd_arrow_sit[0];
				lcd_arrow_sit_last[1]=lcd_arrow_sit[1];
				lcd_arrow_sit[0]--;
				if(lcd_arrow_sit[0]<0)lcd_arrow_sit[0]=0;
				return;
			}
		}
		
		if((rocker_y<=0.5))
		{
			delay_ms(2);
			if((rocker_y<=0.5))
			{
				lcd_arrow_sit_last[1]=lcd_arrow_sit[1];
				lcd_arrow_sit_last[0]=lcd_arrow_sit[0];
				lcd_arrow_sit[1]++;
				if(lcd_arrow_sit[1]>9)lcd_arrow_sit[1]=9;
				return;
			}
		}
		
		if(rocker_y>=3)
		{
			delay_ms(2);
			if(rocker_y>=3)
			{
				lcd_arrow_sit_last[1]=lcd_arrow_sit[1];
				lcd_arrow_sit_last[0]=lcd_arrow_sit[0];
				lcd_arrow_sit[1]--;
				if(lcd_arrow_sit[1]<0)lcd_arrow_sit[1]=0;
				return;
			}
		}
	}
	
	if((rockerkey_H_L==0))
    {
		delay_ms(20);
		if(rockerkey_H_L==0)
		{
			lcd_page++;
			LCD_Clear(WHITE);
			lcd_page_set=START;
			lcd_arrow_sit_last[0]=0;
			lcd_arrow_sit_last[1]=0;
			lcd_arrow_sit[0]=0;
			lcd_arrow_sit[1]=0;
			if(lcd_page>2)lcd_page=1;
		}
    }
}



















