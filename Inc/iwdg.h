/*
 * iwdg.h
 *
 *  Created on: Oct 4, 2026
 *      Author: Admin
 */

#ifndef IWDG_H_
#define IWDG_H_

#include <stdint.h>
#include "stm32f446xx.h"

void iwdg_init(void);
void iwdg_start(void);
void iwdg_refresh(void);

#endif /* IWDG_H_ */
