#define	NLAPIC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NLAPIC
 .global _KERNEL_OPT_NLAPIC
 .equiv _KERNEL_OPT_NLAPIC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NLAPIC\n .global _KERNEL_OPT_NLAPIC\n .equiv _KERNEL_OPT_NLAPIC,0x1\n .endif");
#endif
