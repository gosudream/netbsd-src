#define	NUCYCOM	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUCYCOM
 .global _KERNEL_OPT_NUCYCOM
 .equiv _KERNEL_OPT_NUCYCOM,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUCYCOM\n .global _KERNEL_OPT_NUCYCOM\n .equiv _KERNEL_OPT_NUCYCOM,0x1\n .endif");
#endif
