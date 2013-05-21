#define	NVGA_PCI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NVGA_PCI
 .global _KERNEL_OPT_NVGA_PCI
 .equiv _KERNEL_OPT_NVGA_PCI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NVGA_PCI\n .global _KERNEL_OPT_NVGA_PCI\n .equiv _KERNEL_OPT_NVGA_PCI,0x1\n .endif");
#endif
