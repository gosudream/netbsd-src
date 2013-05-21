#define	NSPKR	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSPKR
 .global _KERNEL_OPT_NSPKR
 .equiv _KERNEL_OPT_NSPKR,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSPKR\n .global _KERNEL_OPT_NSPKR\n .equiv _KERNEL_OPT_NSPKR,0x0\n .endif");
#endif
