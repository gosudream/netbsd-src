#define	NSTI_PCI	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSTI_PCI
 .global _KERNEL_OPT_NSTI_PCI
 .equiv _KERNEL_OPT_NSTI_PCI,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSTI_PCI\n .global _KERNEL_OPT_NSTI_PCI\n .equiv _KERNEL_OPT_NSTI_PCI,0x0\n .endif");
#endif
