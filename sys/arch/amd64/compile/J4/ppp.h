#define	NPPP	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPPP
 .global _KERNEL_OPT_NPPP
 .equiv _KERNEL_OPT_NPPP,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPPP\n .global _KERNEL_OPT_NPPP\n .equiv _KERNEL_OPT_NPPP,0x1\n .endif");
#endif
