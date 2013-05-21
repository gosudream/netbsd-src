#define	MTRR	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MTRR
 .global _KERNEL_OPT_MTRR
 .equiv _KERNEL_OPT_MTRR,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MTRR\n .global _KERNEL_OPT_MTRR\n .equiv _KERNEL_OPT_MTRR,0x1\n .endif");
#endif
