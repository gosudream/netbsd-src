#define	NISA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NISA
 .global _KERNEL_OPT_NISA
 .equiv _KERNEL_OPT_NISA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NISA\n .global _KERNEL_OPT_NISA\n .equiv _KERNEL_OPT_NISA,0x1\n .endif");
#endif
