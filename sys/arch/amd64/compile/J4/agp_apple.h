#define	NAGP_APPLE	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NAGP_APPLE
 .global _KERNEL_OPT_NAGP_APPLE
 .equiv _KERNEL_OPT_NAGP_APPLE,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NAGP_APPLE\n .global _KERNEL_OPT_NAGP_APPLE\n .equiv _KERNEL_OPT_NAGP_APPLE,0x0\n .endif");
#endif
#define	NAGP	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NAGP
 .global _KERNEL_OPT_NAGP
 .equiv _KERNEL_OPT_NAGP,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NAGP\n .global _KERNEL_OPT_NAGP\n .equiv _KERNEL_OPT_NAGP,0x1\n .endif");
#endif
