#define	NSL	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSL
 .global _KERNEL_OPT_NSL
 .equiv _KERNEL_OPT_NSL,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSL\n .global _KERNEL_OPT_NSL\n .equiv _KERNEL_OPT_NSL,0x1\n .endif");
#endif