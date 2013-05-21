#define	NWSS	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NWSS
 .global _KERNEL_OPT_NWSS
 .equiv _KERNEL_OPT_NWSS,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NWSS\n .global _KERNEL_OPT_NWSS\n .equiv _KERNEL_OPT_NWSS,0x0\n .endif");
#endif
