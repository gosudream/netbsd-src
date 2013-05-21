#define	NTPM_ISA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NTPM_ISA
 .global _KERNEL_OPT_NTPM_ISA
 .equiv _KERNEL_OPT_NTPM_ISA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NTPM_ISA\n .global _KERNEL_OPT_NTPM_ISA\n .equiv _KERNEL_OPT_NTPM_ISA,0x1\n .endif");
#endif
