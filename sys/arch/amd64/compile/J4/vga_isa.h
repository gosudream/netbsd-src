#define	NVGA_ISA	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NVGA_ISA
 .global _KERNEL_OPT_NVGA_ISA
 .equiv _KERNEL_OPT_NVGA_ISA,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NVGA_ISA\n .global _KERNEL_OPT_NVGA_ISA\n .equiv _KERNEL_OPT_NVGA_ISA,0x0\n .endif");
#endif