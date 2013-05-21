#define	NSISFB	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSISFB
 .global _KERNEL_OPT_NSISFB
 .equiv _KERNEL_OPT_NSISFB,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSISFB\n .global _KERNEL_OPT_NSISFB\n .equiv _KERNEL_OPT_NSISFB,0x0\n .endif");
#endif
