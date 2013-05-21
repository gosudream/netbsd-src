#define	NFDC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NFDC
 .global _KERNEL_OPT_NFDC
 .equiv _KERNEL_OPT_NFDC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NFDC\n .global _KERNEL_OPT_NFDC\n .equiv _KERNEL_OPT_NFDC,0x1\n .endif");
#endif
