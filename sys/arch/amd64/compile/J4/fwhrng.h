#define	NFWHRNG	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NFWHRNG
 .global _KERNEL_OPT_NFWHRNG
 .equiv _KERNEL_OPT_NFWHRNG,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NFWHRNG\n .global _KERNEL_OPT_NFWHRNG\n .equiv _KERNEL_OPT_NFWHRNG,0x1\n .endif");
#endif
