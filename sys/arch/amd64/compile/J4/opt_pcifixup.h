/* option `PCI_INTR_FIXUP_FORCE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCI_INTR_FIXUP_FORCE
 .global _KERNEL_OPT_PCI_INTR_FIXUP_FORCE
 .equiv _KERNEL_OPT_PCI_INTR_FIXUP_FORCE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCI_INTR_FIXUP_FORCE\n .global _KERNEL_OPT_PCI_INTR_FIXUP_FORCE\n .equiv _KERNEL_OPT_PCI_INTR_FIXUP_FORCE,0x6e074def\n .endif");
#endif
/* option `PCI_INTR_FIXUP' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCI_INTR_FIXUP
 .global _KERNEL_OPT_PCI_INTR_FIXUP
 .equiv _KERNEL_OPT_PCI_INTR_FIXUP,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCI_INTR_FIXUP\n .global _KERNEL_OPT_PCI_INTR_FIXUP\n .equiv _KERNEL_OPT_PCI_INTR_FIXUP,0x6e074def\n .endif");
#endif
/* option `PCI_BUS_FIXUP' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCI_BUS_FIXUP
 .global _KERNEL_OPT_PCI_BUS_FIXUP
 .equiv _KERNEL_OPT_PCI_BUS_FIXUP,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCI_BUS_FIXUP\n .global _KERNEL_OPT_PCI_BUS_FIXUP\n .equiv _KERNEL_OPT_PCI_BUS_FIXUP,0x6e074def\n .endif");
#endif
/* option `PCI_ADDR_FIXUP' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCI_ADDR_FIXUP
 .global _KERNEL_OPT_PCI_ADDR_FIXUP
 .equiv _KERNEL_OPT_PCI_ADDR_FIXUP,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCI_ADDR_FIXUP\n .global _KERNEL_OPT_PCI_ADDR_FIXUP\n .equiv _KERNEL_OPT_PCI_ADDR_FIXUP,0x6e074def\n .endif");
#endif
