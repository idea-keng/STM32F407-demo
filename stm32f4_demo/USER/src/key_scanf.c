#include "key_scanf.h"

void key_scanf(void)
{
	int parameter_sit;
	
	parameter_sit=(lcd_page-2)*20+lcd_arrow_sit[0]*10+lcd_arrow_sit[1];
	
/*----------------------*/   
    if((KEY0_H_L==0))
    {
		 delay_ms(5);
		 if(KEY0_H_L==0)
		 {
			if(lcd_page==2)
			{
				switch(parameter_sit)
				{
					case 0:parameter_change[1]=temp0+=1;break;
					case 1:parameter_change[1]=temp1+=1;break;
					case 2:parameter_change[1]=temp2+=1;break;
					case 3:parameter_change[1]=temp3+=1;break;
					case 4:parameter_change[1]=temp4+=1;break;
					case 5:parameter_change[1]=temp5+=1;break;
					case 6:parameter_change[1]=temp6+=1;break;
					case 7:parameter_change[1]=temp7+=1;break;
					case 8:parameter_change[1]=temp8+=1;break;
					case 9:parameter_change[1]=temp9+=1;break;
					case 10:parameter_change[1]=temp10+=1;break;
					case 11:parameter_change[1]=temp11+=1;break;
					case 12:parameter_change[1]=temp12+=1;break;
					case 13:parameter_change[1]=temp13+=1;break;
					case 14:parameter_change[1]=temp14+=1;break;
					case 15:parameter_change[1]=temp15+=1;break;
					case 16:parameter_change[1]=temp16+=1;break;
					case 17:parameter_change[1]=temp17+=1;break;
					case 18:parameter_change[1]=temp18+=1;break;
					case 19:parameter_change[1]=temp19+=1;break;
					default:break;
				}
				parameter_change[0]=parameter_sit%20;
				parameter_change[2]=1;
			}
		}

    }	
/*----------------------*/   
    if((KEY1_H_L==0))
    {
		 delay_ms(5);
		 if((KEY1_H_L==0))
		 {
			if(lcd_page==2)
			{
				switch(parameter_sit)
				{
					case 0:parameter_change[1]=temp0-=1;break;
					case 1:parameter_change[1]=temp1-=1;break;
					case 2:parameter_change[1]=temp2-=1;break;
					case 3:parameter_change[1]=temp3-=1;break;
					case 4:parameter_change[1]=temp4-=1;break;
					case 5:parameter_change[1]=temp5-=1;break;
					case 6:parameter_change[1]=temp6-=1;break;
					case 7:parameter_change[1]=temp7-=1;break;
					case 8:parameter_change[1]=temp8-=1;break;
					case 9:parameter_change[1]=temp9-=1;break;
					case 10:parameter_change[1]=temp10-=1;break;
					case 11:parameter_change[1]=temp11-=1;break;
					case 12:parameter_change[1]=temp12-=1;break;
					case 13:parameter_change[1]=temp13-=1;break;
					case 14:parameter_change[1]=temp14-=1;break;
					case 15:parameter_change[1]=temp15-=1;break;
					case 16:parameter_change[1]=temp16-=1;break;
					case 17:parameter_change[1]=temp17-=1;break;
					case 18:parameter_change[1]=temp18-=1;break;
					case 19:parameter_change[1]=temp19-=1;break;
					default:break;
				}
				parameter_change[0]=parameter_sit%20;
				parameter_change[2]=1;
			}
		 }

    }
/*===============================================*/   
    if((KEY2_H_L==0))
    {
      delay_ms(5);
      if((KEY2_H_L==0))
      { 
		STMFLASH_Write_float(FLASH_SAVE_ADDR,temp0);
		STMFLASH_Write_float(FLASH_SAVE_ADDR+4,temp1);
      }
    }		
/*----------------------*/		
    if((KEY3_H_L==0))
    {
		delay_ms(5);
		if((KEY3_H_L==0))
		{   
		  temp0=STMFLASH_Read_float(FLASH_SAVE_ADDR);
		  temp1=STMFLASH_Read_float(FLASH_SAVE_ADDR+4);
		  lcd_page_set=START;
		}

    }
/*-------------------------------------*/ 
    if((KEY4_H_L==0))           				//Ä£Ê½Ñ¡Ôñ
    {
		 delay_ms(5);
		 if((KEY4_H_L==0))
		 {   
			
		 }
    }

}
