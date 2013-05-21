#define	KERN_SA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_KERN_SA
 .global _KERNEL_OPT_KERN_SA
 .equiv _KERNEL_OPT_KERN_SA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_KERN_SA\n .global _KERNEL_OPT_KERN_SA\n .equiv _KERNEL_OPT_KERN_SA,0x1\n .endif");
#endif
