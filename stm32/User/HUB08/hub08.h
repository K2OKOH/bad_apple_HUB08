#ifndef __BSP_HUB08_H
#define __BSP_HUB08_H

#include "stm32f10x.h"

#define CTRL_GPIO_PORT 	GPIOB
#define CTRL_GPIO_CLK 	RCC_APB2Periph_GPIOB
#define A_GPIO_PIN 		GPIO_Pin_15
#define B_GPIO_PIN 		GPIO_Pin_14
#define C_GPIO_PIN 		GPIO_Pin_13
#define D_GPIO_PIN 		GPIO_Pin_12
#define CLK_GPIO_PIN    GPIO_Pin_8  //B
#define LAT_GPIO_PIN    GPIO_Pin_9  //B
#define OE_GPIO_PIN     GPIO_Pin_11 //B

#define UPDOWN_GPIO_PORT 	GPIOA
#define UPDOWN_GPIO_CLK 	RCC_APB2Periph_GPIOA
#define R1_GPIO_PIN      	GPIO_Pin_9  //A
#define R2_GPIO_PIN      	GPIO_Pin_10 //A

#define OE_ENABLE		GPIO_SetBits(CTRL_GPIO_PORT, OE_GPIO_PIN);
#define OE_DISABLE		GPIO_ResetBits(CTRL_GPIO_PORT, OE_GPIO_PIN);

void HUB08_init(void);

#endif
