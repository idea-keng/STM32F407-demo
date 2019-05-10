#include "all_init.h"


void all_init(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	//设置系统中断优先级分组2
	delay_init(168);      							//初始化延时函数
	uart_init(115200);								//初始化串口波特率为115200

	
	LED_Init();			  							//初始化LED
 	LCD_Init();           							//初始化LCD FSMC接口
	KEY_port_init();      							//按键引脚初始化
	rocher_port_init();								//初始化摇杆
	BEEP_Init();									//蜂鸣器初始化

}
