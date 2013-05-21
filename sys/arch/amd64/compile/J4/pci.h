#define	NPCI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPCI
 .global _KERNEL_OPT_NPCI
 .equiv _KERNEL_OPT_NPCI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPCI\n .global _KERNEL_OPT_NPCI\n .equiv _KERNEL_OPT_NPCI,0x1\n .endif");
#endif
