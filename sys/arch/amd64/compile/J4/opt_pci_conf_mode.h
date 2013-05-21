/* option `PCI_CONF_MODE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCI_CONF_MODE
 .global _KERNEL_OPT_PCI_CONF_MODE
 .equiv _KERNEL_OPT_PCI_CONF_MODE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCI_CONF_MODE\n .global _KERNEL_OPT_PCI_CONF_MODE\n .equiv _KERNEL_OPT_PCI_CONF_MODE,0x6e074def\n .endif");
#endif
