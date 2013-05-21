/* option `PCI_NETBSD_CONFIGURE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCI_NETBSD_CONFIGURE
 .global _KERNEL_OPT_PCI_NETBSD_CONFIGURE
 .equiv _KERNEL_OPT_PCI_NETBSD_CONFIGURE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCI_NETBSD_CONFIGURE\n .global _KERNEL_OPT_PCI_NETBSD_CONFIGURE\n .equiv _KERNEL_OPT_PCI_NETBSD_CONFIGURE,0x6e074def\n .endif");
#endif
/* option `PCI_CONFIG_DUMP' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCI_CONFIG_DUMP
 .global _KERNEL_OPT_PCI_CONFIG_DUMP
 .equiv _KERNEL_OPT_PCI_CONFIG_DUMP,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCI_CONFIG_DUMP\n .global _KERNEL_OPT_PCI_CONFIG_DUMP\n .equiv _KERNEL_OPT_PCI_CONFIG_DUMP,0x6e074def\n .endif");
#endif
/* option `PCIVERBOSE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCIVERBOSE
 .global _KERNEL_OPT_PCIVERBOSE
 .equiv _KERNEL_OPT_PCIVERBOSE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCIVERBOSE\n .global _KERNEL_OPT_PCIVERBOSE\n .equiv _KERNEL_OPT_PCIVERBOSE,0x6e074def\n .endif");
#endif
/* option `PCI_NETBSD_ENABLE_IDE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCI_NETBSD_ENABLE_IDE
 .global _KERNEL_OPT_PCI_NETBSD_ENABLE_IDE
 .equiv _KERNEL_OPT_PCI_NETBSD_ENABLE_IDE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCI_NETBSD_ENABLE_IDE\n .global _KERNEL_OPT_PCI_NETBSD_ENABLE_IDE\n .equiv _KERNEL_OPT_PCI_NETBSD_ENABLE_IDE,0x6e074def\n .endif");
#endif
