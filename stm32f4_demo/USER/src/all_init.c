#include "all_init.h"


void all_init(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	//����ϵͳ�ж����ȼ�����2
	delay_init(168);      							//��ʼ����ʱ����
	uart_init(115200);								//��ʼ�����ڲ�����Ϊ115200

	
	LED_Init();			  							//��ʼ��LED
 	LCD_Init();           							//��ʼ��LCD FSMC�ӿ�
	KEY_port_init();      							//�������ų�ʼ��
	rocher_port_init();								//��ʼ��ҡ��
	BEEP_Init();									//��������ʼ��

}
