#define	NJOY_ESS	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NJOY_ESS
 .global _KERNEL_OPT_NJOY_ESS
 .equiv _KERNEL_OPT_NJOY_ESS,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NJOY_ESS\n .global _KERNEL_OPT_NJOY_ESS\n .equiv _KERNEL_OPT_NJOY_ESS,0x0\n .endif");
#endif
