#define	NVIDEO	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NVIDEO
 .global _KERNEL_OPT_NVIDEO
 .equiv _KERNEL_OPT_NVIDEO,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NVIDEO\n .global _KERNEL_OPT_NVIDEO\n .equiv _KERNEL_OPT_NVIDEO,0x1\n .endif");
#endif
