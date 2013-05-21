#define	NJOY_EAP	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NJOY_EAP
 .global _KERNEL_OPT_NJOY_EAP
 .equiv _KERNEL_OPT_NJOY_EAP,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NJOY_EAP\n .global _KERNEL_OPT_NJOY_EAP\n .equiv _KERNEL_OPT_NJOY_EAP,0x0\n .endif");
#endif
