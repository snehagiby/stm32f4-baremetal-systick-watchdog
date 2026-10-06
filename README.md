# Project Name

Baremetal-systick-watchdog

## Project

Register-level peripheral drivers for the STM32F446RE iwdg and core M4 systick configuration.
All peripheral access done via CMSIS structure.

### Target Hardware
	
- MCU:	STM32F446RE
- Board:	NUCLEO-F446RE
- Toolchain:	STM32CubeIDE

#### Feature

  - Core M4 systick is configured and a delay of 1msec is created.
  - IWDG is enabled and refreshed in the while loop not to trigger reset.

##### Project Structure
```text
├── Inc/           # Header files (systick.h,iwdg.h)
├── Src/           # Source files (systick.c,iwdg.c)
├── Startup/       # Startup assembly file
├── STM32F446RETX_FLASH.ld   # Linker script (Flash)
├── STM32F446RETX_RAM.ld     # Linker script (RAM)
├── .project / .cproject     # STM32CubeIDE project files
└── .gitignore
```
###### Usage API

## iwdg:
```c
void iwdg_init(void);
void iwdg_start(void);
void iwdg_refresh(void);
```
## systick:
```c
void systic_init(uint32_t reload);
void custom_delay(uint32_t delay_ms);
```
**NOTE:**
- Clock source is determined from the Block Diagram in the Datasheet DS10693 Rev 11.
- IWDG Peripheral address are determine from the memory map in the reference manual RM0390.
- Systick register are studied through DUI0553A_cortex_m4_dgug.

