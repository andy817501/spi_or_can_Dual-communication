#ifndef __SYSTICK_H
#define __SYSTICK_H

#include "stm32f4xx.h"

typedef uint32_t  u32;

void SysTick_Init(void);
void Delay_us(__IO u32 nTime);
#define delay_ms(x) Delay_us(100*x)	 //��λms

#endif /* __SYSTICK_H */
