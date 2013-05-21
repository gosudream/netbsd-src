#define	NCLOCKCTL	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCLOCKCTL
 .global _KERNEL_OPT_NCLOCKCTL
 .equiv _KERNEL_OPT_NCLOCKCTL,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCLOCKCTL\n .global _KERNEL_OPT_NCLOCKCTL\n .equiv _KERNEL_OPT_NCLOCKCTL,0x1\n .endif");
#endif
