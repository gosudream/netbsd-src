#define	NVERIEXEC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NVERIEXEC
 .global _KERNEL_OPT_NVERIEXEC
 .equiv _KERNEL_OPT_NVERIEXEC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NVERIEXEC\n .global _KERNEL_OPT_NVERIEXEC\n .equiv _KERNEL_OPT_NVERIEXEC,0x1\n .endif");
#endif
