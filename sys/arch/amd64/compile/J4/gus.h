#define	NGUS	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NGUS
 .global _KERNEL_OPT_NGUS
 .equiv _KERNEL_OPT_NGUS,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NGUS\n .global _KERNEL_OPT_NGUS\n .equiv _KERNEL_OPT_NGUS,0x0\n .endif");
#endif
