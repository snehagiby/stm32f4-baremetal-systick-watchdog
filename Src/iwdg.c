/*
 * iwdg.c
 *
 *  Created on: Oct 4, 2026
 *      Author: Admin
 */

#include "iwdg.h"

void iwdg_init(void){
	IWDG->KR = 0x5555;
	IWDG->PR = 3;
	IWDG->RLR = 0xFFF;
}
void iwdg_start(void){
	IWDG->KR = 0xCCCC;
}
void iwdg_refresh(void){
	IWDG->KR = 0xAAAA;
}
