#define	NNISAC	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NNISAC
 .global _KERNEL_OPT_NNISAC
 .equiv _KERNEL_OPT_NNISAC,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NNISAC\n .global _KERNEL_OPT_NNISAC\n .equiv _KERNEL_OPT_NNISAC,0x0\n .endif");
#endif
