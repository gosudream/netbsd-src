#define	NSATLINK	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSATLINK
 .global _KERNEL_OPT_NSATLINK
 .equiv _KERNEL_OPT_NSATLINK,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSATLINK\n .global _KERNEL_OPT_NSATLINK\n .equiv _KERNEL_OPT_NSATLINK,0x0\n .endif");
#endif
