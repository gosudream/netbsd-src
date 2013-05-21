#define	NTPM	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NTPM
 .global _KERNEL_OPT_NTPM
 .equiv _KERNEL_OPT_NTPM,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NTPM\n .global _KERNEL_OPT_NTPM\n .equiv _KERNEL_OPT_NTPM,0x1\n .endif");
#endif
