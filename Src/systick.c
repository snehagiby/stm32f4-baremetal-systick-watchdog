/*
 * systick.c
 *
 *  Created on: Oct 4, 2026
 *      Author: Admin
 */
#include "systick.h"

uint32_t ms;

void SysTick_Handler(void)
{
	ms++;
}

/**
 * program relaod value
 * clear current value
 * program control status register
 */
void systic_init(uint32_t reload){
  SysTick->LOAD = reload;
  SysTick->VAL = 0;
  SysTick->CTRL = (1<<0)|(1<<1)|(1<<2); //enable systick,enable systick interrupt,enable processor clock.
}


void custom_delay(uint32_t delay_ms){
	ms = 0;
	while(ms != delay_ms);
}
