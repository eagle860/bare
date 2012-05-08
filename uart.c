#include "ok6410.h"


void uart_init(void)
{
	GPACON &= ~0xff;
	GPACON |= 0x22;
	
	/* ULCON0 */
	ULCON0 = 0x3;  /* ÊýŸÝÎ»:8, ÎÞœÏÑé, Í£Ö¹Î»: 1, 8n1 */
	UCON0  = 0x5;  /* Ê¹ÄÜUART·¢ËÍ¡¢œÓÊÕ */
	UFCON0 = 0x01; /* FIFO ENABLE */

	UMCON0 = 0;
	
	/* ²šÌØÂÊ */
	/* DIV_VAL = (PCLK / (bps x 16 ) ) - 1 
	 * bps = 115200
	 * DIV_VAL = (66500000 / (115200 x 16 ) ) - 1 
	 *         = 35.08
	 */
	UBRDIV0   = 35;

	/* x/16 = 0.08
	 * x = 1
	 */
	UDIVSLOT0 = 0x1;
	
}

char get_char(void)
{
	while ((UFSTAT0 & 0x7f) == 0);  /* Èç¹ûRX FIFO¿Õ£¬µÈŽý */
	return URXH0;                   /* È¡ÊýŸÝ */
}

void put_char(char c)
{
	while (UFSTAT0 & (1<<14)); /* Èç¹ûTX FIFOÂú£¬µÈŽý */
	UTXH0 = c;                         /* ÐŽÊýŸÝ */
}

