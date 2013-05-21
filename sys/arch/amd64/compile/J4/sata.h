#define	NSATA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSATA
 .global _KERNEL_OPT_NSATA
 .equiv _KERNEL_OPT_NSATA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSATA\n .global _KERNEL_OPT_NSATA\n .equiv _KERNEL_OPT_NSATA,0x1\n .endif");
#endif
