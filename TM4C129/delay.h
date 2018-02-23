#ifndef _DELAY_H
#define _DELAY_H

#include "gpio.h"									//we use gpio

//#define DLY_US	853				//852.46 is the right number for default stm32vl discovery board

//for compatability
#define delayms(n)					delay_ms(n)
#define delayus(n)					delay_us(n)

void delay(volatile int dly);

//delay a few us
void delay_us(volatile uint32_t dly_us);

//delay a few ms
void delay_ms(volatile uint32_t dly_ms);

#endif
