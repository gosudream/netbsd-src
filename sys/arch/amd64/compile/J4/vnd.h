#define	NVND	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NVND
 .global _KERNEL_OPT_NVND
 .equiv _KERNEL_OPT_NVND,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NVND\n .global _KERNEL_OPT_NVND\n .equiv _KERNEL_OPT_NVND,0x1\n .endif");
#endif
