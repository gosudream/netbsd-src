#define	NPAS	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPAS
 .global _KERNEL_OPT_NPAS
 .equiv _KERNEL_OPT_NPAS,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPAS\n .global _KERNEL_OPT_NPAS\n .equiv _KERNEL_OPT_NPAS,0x0\n .endif");
#endif
