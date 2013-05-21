#define	NSES	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSES
 .global _KERNEL_OPT_NSES
 .equiv _KERNEL_OPT_NSES,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSES\n .global _KERNEL_OPT_NSES\n .equiv _KERNEL_OPT_NSES,0x1\n .endif");
#endif
