#define	NSMSC	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSMSC
 .global _KERNEL_OPT_NSMSC
 .equiv _KERNEL_OPT_NSMSC,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSMSC\n .global _KERNEL_OPT_NSMSC\n .equiv _KERNEL_OPT_NSMSC,0x0\n .endif");
#endif
