#define	COMPAT_LINUX	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_LINUX
 .global _KERNEL_OPT_COMPAT_LINUX
 .equiv _KERNEL_OPT_COMPAT_LINUX,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_LINUX\n .global _KERNEL_OPT_COMPAT_LINUX\n .equiv _KERNEL_OPT_COMPAT_LINUX,0x1\n .endif");
#endif
