#define	NIPFILTER	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NIPFILTER
 .global _KERNEL_OPT_NIPFILTER
 .equiv _KERNEL_OPT_NIPFILTER,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NIPFILTER\n .global _KERNEL_OPT_NIPFILTER\n .equiv _KERNEL_OPT_NIPFILTER,0x1\n .endif");
#endif
