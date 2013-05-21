#define	NAGP_AMD64	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NAGP_AMD64
 .global _KERNEL_OPT_NAGP_AMD64
 .equiv _KERNEL_OPT_NAGP_AMD64,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NAGP_AMD64\n .global _KERNEL_OPT_NAGP_AMD64\n .equiv _KERNEL_OPT_NAGP_AMD64,0x1\n .endif");
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
