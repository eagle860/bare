#include "ok6410.h"
#include "led.h"


void led_init()
{
	GPMCON = 0x1111;
}

void led_flick()
{
	GPMDAT ^= 0xF;
}

