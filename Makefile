objs = start.o clock.o ddr.o main.o uart.o led.o nand.o 
dest = bare

CROSS_COPILE = arm-linux-
CC = ${CROSS_COPILE}gcc
LD = ${CROSS_COPILE}ld
AR = ${CROSS_COPILE}ar
OBJCOPY = ${CROSS_COPILE}objcopy
OBJDUMP = ${CROSS_COPILE}objdump

${dest}.bin: $(objs)
	arm-linux-ld -T${dest}.lds -o ${dest}.elf $^
	arm-linux-objcopy -O binary ${dest}.elf ${dest}.bin
	arm-linux-objdump -D ${dest}.elf > ${dest}.dis
	@ls -l $@

%.o : %.S
	arm-linux-gcc -o $@ $< -c

%.o : %.c
	arm-linux-gcc -o $@ $< -c
	
clean:
	rm *.o ${dest}.elf ${dest}.bin ${dest}.dis
