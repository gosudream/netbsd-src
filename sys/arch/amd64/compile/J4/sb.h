#define	NSB	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSB
 .global _KERNEL_OPT_NSB
 .equiv _KERNEL_OPT_NSB,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSB\n .global _KERNEL_OPT_NSB\n .equiv _KERNEL_OPT_NSB,0x0\n .endif");
#endif
