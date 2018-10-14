#include "stm32f10x.h"
#include "config.h"
#include "./HUB08/hub08.h"
#include "./GeneralTim/bsp_GeneralTim.h"

uint32_t time = 0; // ms flag

int main(void)
{
	HUB08_init();

	refresh_TIM_Init(); //TIM init 20HZ
    while (1)
    {    
      if ( time >= 20 )
      {
        time = 0;
      }
      led_imige_show();
    }
}

void STEER_TIM_Init(void)
{
	GENERAL_TIM_NVIC_Config();
	GENERAL_TIM_Mode_Config();
}

void led_image_show(void)
{
  for(line=0;line<16;line++)
	{
		led_line_show();  //load a line
		OE_ENABLE;        //LED screen enable	
		STR = 1;     
		STR = 0;	        //output latch		
		P0 = line;        //choose a line   --change with stm32
		OE_DISABLE;       //LED screen disable
	}
}

void led_line_show(void)   //display one line in both side
{
  unsigned char s;
  unsigned char temp_up, temp_down;

  for(s=0;s<8;s++)		 //send 8 bite to display one line in each side (64 led)
	{
		temp_up = 0xff;
		temp_down = 0xff;   //turn on all the light
		G2=1; //don't display green

		for(k=0;k<8;k++)//give 8 bit to 595 by bit,display 8 led each side
		{			   
			R1 = temp_up &  0x01;
			R2 = temp_down & 0x01;      //--change with stm32
			CLK = 0;
			CLK = 1;
			temp_up = temp_up >> 1; 
			temp2_down = temp_down >> 1; 		   
		}
	}
}
