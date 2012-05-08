#include "ok6410.h"
#include "led.h"
#include "uart.h"


void delay(unsigned int n_ms)
{
	volatile int i = 1000UL * n_ms;
	while (i--);
}

int main()
{
	led_init();
	uart_init();

	while (1)
	{
		led_flick();
		put_char('t');
		delay(1000UL);
	}

	return 0;
}

