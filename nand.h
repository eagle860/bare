#ifndef _NAND_H_
#define _NAND_H_


void nand_init(void);
int nand_read(unsigned int nand_start, unsigned int ddr_start, unsigned int len);
int nand_write(unsigned int nand_start, unsigned char * buf, unsigned int len);
int nand_erase_block(unsigned long addr);
int copy2ddr(unsigned int nand_start, unsigned int ddr_start, unsigned int len);


#endif // ~_NAND_H_

