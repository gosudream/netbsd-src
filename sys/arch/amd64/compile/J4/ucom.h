#define	NUCOM	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUCOM
 .global _KERNEL_OPT_NUCOM
 .equiv _KERNEL_OPT_NUCOM,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUCOM\n .global _KERNEL_OPT_NUCOM\n .equiv _KERNEL_OPT_NUCOM,0x1\n .endif");
#endif
#define	NUCOMBUS	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUCOMBUS
 .global _KERNEL_OPT_NUCOMBUS
 .equiv _KERNEL_OPT_NUCOMBUS,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUCOMBUS\n .global _KERNEL_OPT_NUCOMBUS\n .equiv _KERNEL_OPT_NUCOMBUS,0x1\n .endif");
#endif
