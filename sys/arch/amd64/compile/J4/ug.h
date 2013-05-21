#define	NUG	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUG
 .global _KERNEL_OPT_NUG
 .equiv _KERNEL_OPT_NUG,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUG\n .global _KERNEL_OPT_NUG\n .equiv _KERNEL_OPT_NUG,0x1\n .endif");
#endif
