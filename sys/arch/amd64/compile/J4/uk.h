#define	NUK	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUK
 .global _KERNEL_OPT_NUK
 .equiv _KERNEL_OPT_NUK,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUK\n .global _KERNEL_OPT_NUK\n .equiv _KERNEL_OPT_NUK,0x1\n .endif");
#endif
