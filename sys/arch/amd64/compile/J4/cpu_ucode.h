#define	NCPU_UCODE	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCPU_UCODE
 .global _KERNEL_OPT_NCPU_UCODE
 .equiv _KERNEL_OPT_NCPU_UCODE,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCPU_UCODE\n .global _KERNEL_OPT_NCPU_UCODE\n .equiv _KERNEL_OPT_NCPU_UCODE,0x1\n .endif");
#endif
