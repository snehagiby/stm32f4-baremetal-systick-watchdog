
#include <stdint.h>
#include "systick.h"
#include "iwdg.h"

int main(void)
{
	/**
	 * reload value- since Sysclk is intialized by HSI if HSE ,PLLR or PLLCLK any other not enabled
	 * HSI-16MHz RELOAD = CLOCK SOOUCE(HZ)/1000 - 1 i.e reload = 16000-1=15999
	 */
	systic_init(16000 -1);
	custom_delay(100);
	iwdg_init();
	iwdg_start();
    /* Loop forever */
	while(1){
		iwdg_refresh();
	}
}
