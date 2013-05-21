#define	NRAID	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NRAID
 .global _KERNEL_OPT_NRAID
 .equiv _KERNEL_OPT_NRAID,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NRAID\n .global _KERNEL_OPT_NRAID\n .equiv _KERNEL_OPT_NRAID,0x1\n .endif");
#endif
