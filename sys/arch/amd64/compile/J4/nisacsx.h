#define	NNISACSX	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NNISACSX
 .global _KERNEL_OPT_NNISACSX
 .equiv _KERNEL_OPT_NNISACSX,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NNISACSX\n .global _KERNEL_OPT_NNISACSX\n .equiv _KERNEL_OPT_NNISACSX,0x0\n .endif");
#endif
