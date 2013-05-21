#define	NTAP	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NTAP
 .global _KERNEL_OPT_NTAP
 .equiv _KERNEL_OPT_NTAP,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NTAP\n .global _KERNEL_OPT_NTAP\n .equiv _KERNEL_OPT_NTAP,0x1\n .endif");
#endif
