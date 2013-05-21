#define	CPU_UCODE	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_CPU_UCODE
 .global _KERNEL_OPT_CPU_UCODE
 .equiv _KERNEL_OPT_CPU_UCODE,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_CPU_UCODE\n .global _KERNEL_OPT_CPU_UCODE\n .equiv _KERNEL_OPT_CPU_UCODE,0x1\n .endif");
#endif
