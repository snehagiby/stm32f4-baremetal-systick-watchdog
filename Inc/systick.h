/*
 * systick.h
 *
 *  Created on: Oct 4, 2026
 *      Author: Admin
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_

#include <stdint.h>
#include "stm32f446xx.h"

void systic_init(uint32_t reload);
void custom_delay(uint32_t delay_ms);

#endif /* SYSTICK_H_ */
