#include "rocker.h"

//按键引脚初始化函数
void rocher_port_init(void)
{	
#ifdef 	rockerkey_GPIO
	GPIO_InitTypeDef rockerkey_GPIO_InitStructure;	   																	//定义一个GPIO的结构体
#endif


#ifdef 	KEY0_GPIO	
	if(rockerkey_GPIO==GPIOA)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);	//使能用到的GPIO时钟
	if(rockerkey_GPIO==GPIOB)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB , ENABLE);	//使能用到的GPIO时钟
	if(rockerkey_GPIO==GPIOC)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC , ENABLE);	//使能用到的GPIO时钟
	if(rockerkey_GPIO==GPIOD)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE);	//使能用到的GPIO时钟
	if(rockerkey_GPIO==GPIOE)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE , ENABLE);	//使能用到的GPIO时钟
	if(rockerkey_GPIO==GPIOF)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF , ENABLE);	//使能用到的GPIO时钟
	if(rockerkey_GPIO==GPIOG)RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG , ENABLE);	//使能用到的GPIO时钟

	rockerkey_GPIO_InitStructure.GPIO_Pin = rockerkey_GPIO_Pin;                             	//使能要用到的引脚（KEY在h文件里已定义引脚）
	rockerkey_GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;													//设置GPIO时钟速度（2M、10M、50M可选）
	rockerkey_GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;															//设置上拉输入
	GPIO_Init(rockerkey_GPIO, &rockerkey_GPIO_InitStructure);																	//最后总的初始化用到的GPIO，写入寄存器	//KEY0_1;					         																	//大多数驱动KEY的接法都是低电平点亮，因此初始拉高，可省略，这里注释掉，
#endif

	GPIO_InitTypeDef  GPIO_InitStructure;
	ADC_CommonInitTypeDef ADC_CommonInitStructure;
	ADC_InitTypeDef       ADC_InitStructure;
		
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);//使能GPIOA时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC3, ENABLE); //使能ADC1时钟

	//先初始化ADC1通道5 IO口
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5;//
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;//模拟输入
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL ;//不带上下拉
	GPIO_Init(GPIOF, &GPIO_InitStructure);//初始化  
	 
	RCC_APB2PeriphResetCmd(RCC_APB2Periph_ADC3,ENABLE);	  //ADC1复位
	RCC_APB2PeriphResetCmd(RCC_APB2Periph_ADC3,DISABLE);	//复位结束	 
	 
		
	ADC_CommonInitStructure.ADC_Mode = ADC_Mode_Independent;//独立模式
	ADC_CommonInitStructure.ADC_TwoSamplingDelay = ADC_TwoSamplingDelay_5Cycles;//两个采样阶段之间的延迟5个时钟
	ADC_CommonInitStructure.ADC_DMAAccessMode = ADC_DMAAccessMode_Disabled; //DMA失能
	ADC_CommonInitStructure.ADC_Prescaler = ADC_Prescaler_Div4;//预分频4分频。ADCCLK=PCLK2/4=84/4=21Mhz,ADC时钟最好不要超过36Mhz 
	ADC_CommonInit(&ADC_CommonInitStructure);//初始化
		 
	ADC_InitStructure.ADC_Resolution = ADC_Resolution_12b;//12位模式
	ADC_InitStructure.ADC_ScanConvMode = DISABLE;//非扫描模式	
	ADC_InitStructure.ADC_ContinuousConvMode = DISABLE;//关闭连续转换
	ADC_InitStructure.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;//禁止触发检测，使用软件触发
	ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;//右对齐	
	ADC_InitStructure.ADC_NbrOfConversion = 1;//1个转换在规则序列中 也就是只转换规则序列1 
	ADC_Init(ADC3, &ADC_InitStructure);//ADC初始化
		
	 
	ADC_Cmd(ADC3, ENABLE);//开启AD转换器
}

//获得ADC值
u16 rocker_Get_Adc(u8 ch)   
{
	  	//设置指定ADC的规则组通道，一个序列，采样时间
	ADC_RegularChannelConfig(ADC3, ch, 1, ADC_SampleTime_480Cycles );	//ADC3,ADC通道,480个周期,提高采样时间可以提高精确度			    
  
	ADC_SoftwareStartConv(ADC3);		//使能指定的ADC3的软件转换启动功能	
	 
	while(!ADC_GetFlagStatus(ADC3, ADC_FLAG_EOC ));//等待转换结束

	return ADC_GetConversionValue(ADC3);	//返回最近一次ADC3规则组的转换结果
}
//获取通道ch的转换值，取times次,然后平均 
//ch:通道编号
//times:获取次数
//返回值:通道ch的times次转换结果平均值
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



















