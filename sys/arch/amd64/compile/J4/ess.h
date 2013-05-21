#define	NESS	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NESS
 .global _KERNEL_OPT_NESS
 .equiv _KERNEL_OPT_NESS,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NESS\n .global _KERNEL_OPT_NESS\n .equiv _KERNEL_OPT_NESS,0x0\n .endif");
#endif
