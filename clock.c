#include "ok6410.h"


#define ARM_RATIO    0   /* ARMCLK = DOUTAPLL / (ARM_RATIO + 1)    */
#define HCLKX2_RATIO 1   /* HCLKX2 = HCLKX2IN / (HCLKX2_RATIO + 1) = 100MHz */
#define HCLK_RATIO   1   /* HCLK = HCLKX2 / (HCLK_RATIO + 1)   = 100MHz       */
#define PCLK_RATIO   3   /* PCLK   = HCLKX2 / (PCLK_RATIO + 1) = 50MHz    */
#define MPLL_RATIO   1   /* DOUTMPLL = MOUTMPLL / (MPLL_RATIO + 1)     */

#define APLL_CON_VAL   ((1<<31) | (266 << 16) | (3 << 8) | (1))
#define MPLL_CON_VAL   ((1<<31) | (266 << 16) | (3 << 8) | (1))
#define EPLL_CON0_VAL  ((1<<31) | (32<<16) | (1<<8) | (2<<0))
#define EPLL_CON1_VAL  (0)

void clock_init(void)
{
	APLL_LOCK = 0xffff;
	MPLL_LOCK = 0xffff;
	EPLL_LOCK = 0xffff;

	/* set async mode 当CPU时钟 != HCLK时，要设为异步模式 */
	OTHERS &= ~0xc0;
	while ((OTHERS & 0xf00) != 0);

	CLK_DIV0 = (ARM_RATIO) | (MPLL_RATIO << 4) | (HCLK_RATIO << 8) | (HCLKX2_RATIO << 9) | (PCLK_RATIO << 12);
	
	APLL_CON = APLL_CON_VAL;
	MPLL_CON = MPLL_CON_VAL;
	EPLL_CON0 = EPLL_CON0_VAL;
	EPLL_CON1 = EPLL_CON1_VAL;

	CLK_SRC = 0x07;
}

