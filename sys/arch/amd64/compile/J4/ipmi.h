#define	NIPMI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NIPMI
 .global _KERNEL_OPT_NIPMI
 .equiv _KERNEL_OPT_NIPMI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NIPMI\n .global _KERNEL_OPT_NIPMI\n .equiv _KERNEL_OPT_NIPMI,0x1\n .endif");
#endif
