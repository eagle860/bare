SECTIONS 
{
	. = 0x50008000;

	. = ALIGN(4);
	.text :
	{
		start.o(.text)
		*(.text)
	}

	. = ALIGN(4);
	.rodata : { *(.rodata) }

	. = ALIGN(4);
	.data : { *(.data) }

	. = ALIGN(4);
	.got : { *(.got) }

	. = ALIGN(4);
	bss_start = .;
	.bss : { *(.bss) }
	bss_end = .;
}
