#define	NAGP_ALI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NAGP_ALI
 .global _KERNEL_OPT_NAGP_ALI
 .equiv _KERNEL_OPT_NAGP_ALI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NAGP_ALI\n .global _KERNEL_OPT_NAGP_ALI\n .equiv _KERNEL_OPT_NAGP_ALI,0x1\n .endif");
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
