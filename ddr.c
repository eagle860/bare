#include "ok6410.h"


#define vi *( volatile unsigned int * ) 

#define set_zero( addr, bit ) ( (vi addr) &= ( ~ ( 1 << (bit) ) ) )
#define set_one( addr, bit ) ( (vi addr) |= ( 1 << ( bit ) ) )

#define set_bit( addr, bit, val ) ( (vi addr) = (( vi addr)&=(~(1<<(bit))) ) | ( (val)<<(bit) ) )

#define set_2bit( addr, bit, val ) ( (vi addr) = (( vi addr)&(~(3<<(bit))) ) | ( (val)<<(bit) ) )

#define set_nbit( addr, bit, len,  val ) \
	( (vi addr) = ((( vi addr)&(~(( ((1<<(len))-1) )<<(bit))))  | ( (val)<<(bit) ) ))

#define get_bit( addr, bit ) ( (( vi addr ) & ( 1 << (bit) )) > 0  )

#define get_val( addr, val ) ( (val) = vi addr )
#define read_val( addr ) ( vi ( addr ) )
#define set_val( addr, val ) ( (vi addr) = (val) )
#define or_val( addr, val ) ( (vi addr) |= (val) ) 

	
#define HCLK	133000000

#define nstoclk(ns)	(ns/( 1000000000/HCLK)+1)

int ddr_init( void )
{
	// tell dramc to configure				
	set_val( P1MEMCCMD, 0x4 );

	// set refresh period	
	set_val( P1REFRESH, nstoclk(7800) );

	// set timing para		
	set_val( P1CASLAT, ( 3 << 1 ) );  
	set_val( P1T_DQSS, 0x1 );	// 0.75 - 1.25
	set_val( P1T_MRD, 0x2 );
	set_val( P1T_RAS, nstoclk(45) );
	set_val( P1T_RC, nstoclk(68) );		

	unsigned int trcd = nstoclk( 23 );
	set_val( P1T_RCD, trcd | (( trcd - 3 ) << 3 ) );
	unsigned int trfc = nstoclk( 80 );
	set_val( P1T_RFC, trfc | ( ( trfc-3 ) << 5 ) );   
	unsigned int trp = nstoclk( 23 );
	set_val( P1T_RP, trp | ( ( trp - 3 ) << 3 ) ); 
	set_val( P1T_RRD, nstoclk(15) );
	set_val( P1T_WR, nstoclk(15) );
	set_val( P1T_WTR, 0x7 );
	set_val( P1T_XP, 0x2 );
	set_val( P1T_XSR, nstoclk(120) );
	set_val( P1T_ESR, nstoclk(120) );
	
	// set mem cfg 
	set_nbit( P1MEMCFG, 0, 3, 0x2 );  /* 10 column address */

	/* set_nbit: 把从第bit位开始的一共len位消零，然后把这几位设为val */
	
	set_nbit( P1MEMCFG, 3, 3, 0x3 );  /* 14 row address */
	set_zero( P1MEMCFG, 6 );		  /* A10/AP */
	set_nbit( P1MEMCFG, 15, 3, 0x2 ); /* Burst 4 */
	
	set_nbit( P1MEMCFG2, 0, 4, 0x5 );
	set_2bit( P1MEMCFG2, 6, 0x1 );		/* 32 bit */
	set_nbit( P1MEMCFG2, 8, 3, 0x3 );	/* Mobile DDR SDRAM */
	set_2bit( P1MEMCFG2, 11, 0x1 );

	set_one( P1_chip_0_cfg, 16 );		/* Bank-Row-Column organization */

	// memory init
	set_val( P1DIRECTCMD, 0xc0000 ); // NOP
	set_val( P1DIRECTCMD, 0x000 );	// precharge
	set_val( P1DIRECTCMD, 0x40000 );// auto refresh
	set_val( P1DIRECTCMD, 0x40000 );// auto refresh
	set_val( P1DIRECTCMD, 0xa0000 ); // EMRS
	set_val( P1DIRECTCMD, 0x80032 ); // MRS

	set_val( MEM_SYS_CFG, 0x0 );
					
	// set dramc to "go" status	
	set_val( P1MEMCCMD, 0x000 );

	// wait ready
	while( !(( read_val( P1MEMSTAT ) & 0x3 ) == 0x1));
}

