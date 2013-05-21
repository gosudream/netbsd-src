#define	NISADMA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NISADMA
 .global _KERNEL_OPT_NISADMA
 .equiv _KERNEL_OPT_NISADMA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NISADMA\n .global _KERNEL_OPT_NISADMA\n .equiv _KERNEL_OPT_NISADMA,0x1\n .endif");
#endif
