#include "./HUB08/hub08.h"

void HUB08_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	RCC_APB2PeriphClockCmd(CTRL_GPIO_CLK|UPDOWN_GPIO_CLK, ENABLE);	//SET RCC
	
	GPIO_InitStructure.GPIO_Pin = A_GPIO_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(CTRL_GPIO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = B_GPIO_PIN;
	GPIO_Init(CTRL_GPIO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = C_GPIO_PIN;
	GPIO_Init(CTRL_GPIO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = D_GPIO_PIN;
	GPIO_Init(CTRL_GPIO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = CLK_GPIO_PIN;
	GPIO_Init(CTRL_GPIO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = LAT_GPIO_PIN;
	GPIO_Init(CTRL_GPIO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = OE_GPIO_PIN;
	GPIO_Init(CTRL_GPIO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = R1_GPIO_PIN;
	GPIO_Init(UPDOWN_GPIO_PORT, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = R2_GPIO_PIN;
	GPIO_Init(UPDOWN_GPIO_PORT, &GPIO_InitStructure);
	
}
