#define	NULPT	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NULPT
 .global _KERNEL_OPT_NULPT
 .equiv _KERNEL_OPT_NULPT,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NULPT\n .global _KERNEL_OPT_NULPT\n .equiv _KERNEL_OPT_NULPT,0x1\n .endif");
#endif
