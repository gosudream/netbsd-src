#define	NIPPP	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NIPPP
 .global _KERNEL_OPT_NIPPP
 .equiv _KERNEL_OPT_NIPPP,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NIPPP\n .global _KERNEL_OPT_NIPPP\n .equiv _KERNEL_OPT_NIPPP,0x0\n .endif");
#endif
