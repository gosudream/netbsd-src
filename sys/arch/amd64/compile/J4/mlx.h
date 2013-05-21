#define	NMLX	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NMLX
 .global _KERNEL_OPT_NMLX
 .equiv _KERNEL_OPT_NMLX,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NMLX\n .global _KERNEL_OPT_NMLX\n .equiv _KERNEL_OPT_NMLX,0x1\n .endif");
#endif
