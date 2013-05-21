#define	NNSMB	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NNSMB
 .global _KERNEL_OPT_NNSMB
 .equiv _KERNEL_OPT_NNSMB,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NNSMB\n .global _KERNEL_OPT_NNSMB\n .equiv _KERNEL_OPT_NNSMB,0x1\n .endif");
#endif
