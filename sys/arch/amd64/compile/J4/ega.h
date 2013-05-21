#define	NEGA	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NEGA
 .global _KERNEL_OPT_NEGA
 .equiv _KERNEL_OPT_NEGA,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NEGA\n .global _KERNEL_OPT_NEGA\n .equiv _KERNEL_OPT_NEGA,0x0\n .endif");
#endif
