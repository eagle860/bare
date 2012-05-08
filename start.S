
.globl _start
_start:
	b reset

reset:
	/*
	 * set the cpu to SVC32 mode
	 */
	mrs r0,cpsr
	bic r0,r0,#0x1f
	orr r0,r0,#0xd3
	msr cpsr,r0

	/*
	 * flush v4 I/D caches
	 */
	mov r0, #0
	mcr p15, 0, r0, c7, c7, 0	/* flush v3/v4 cache */
	mcr p15, 0, r0, c8, c7, 0	/* flush v4 TLB */
	
	/*
	 * disable MMU stuff and caches
	 */
	mrc p15, 0, r0, c1, c0, 0
	bic r0, r0, #0x00002300 @ clear bits 13, 9:8 (--V- --RS)
	bic r0, r0, #0x00000087 @ clear bits 7, 2:0 (B--- -CAM)
	orr r0, r0, #0x00000002 @ set bit 2 (A) Align
	orr r0, r0, #0x00001000 @ set bit 12 (I) I-Cache
	mcr p15, 0, r0, c1, c0, 0
	
	/* Peri port setup */
	ldr r0, =0x70000000
	orr r0, r0, #0x13
	mcr p15,0,r0,c15,c2,4		@ 256M(0x70000000-0x7fffffff)
	
	/* Disable Watchdog */
	ldr r0, =0x7e000000 	@0x7e004000
	orr r0, r0, #0x4000
	mov r1, #0
	str r1, [r0]
	
/* 设置栈 */
	ldr sp, =8*1024

/* 初始化时钟 */
	bl clock_init

/* 初始化DDR */
	bl ddr_init

/* 重定位代码 */
/* 把程序的代码段、数据段复制到它的链接地址去 */	
	adr r0, _start   /* 获得_start指令当前所在的地址 : 0*/
	ldr r1, =_start  /* _start的链接地址 0x50000000 */
	
	ldr r2, =bss_start      /* bss段的起始链接地址 */
	
	cmp r0,r1
	beq clean_bss
	
copy_loop:
	ldr r3, [r0], #4
	str r3, [r1], #4
	cmp r1, r2
	bne copy_loop	

set_stack:
	ldr sp, =0x51000000

/* 把BSS段对应的内存清零 */
clean_bss:
	ldr r0, =bss_start
	ldr r1, =bss_end
	mov r3, #0
	cmp r0, r1
	beq on_ddr
clean_loop:
	str r3, [r0], #4
	cmp r0, r1	
	bne clean_loop	

on_ddr:
	ldr pc, start_main
start_main:
	.word main

