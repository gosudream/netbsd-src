/* option `USB_FRAG_DMA_WORKAROUND' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_USB_FRAG_DMA_WORKAROUND
 .global _KERNEL_OPT_USB_FRAG_DMA_WORKAROUND
 .equiv _KERNEL_OPT_USB_FRAG_DMA_WORKAROUND,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_USB_FRAG_DMA_WORKAROUND\n .global _KERNEL_OPT_USB_FRAG_DMA_WORKAROUND\n .equiv _KERNEL_OPT_USB_FRAG_DMA_WORKAROUND,0x6e074def\n .endif");
#endif
/* option `USB_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_USB_DEBUG
 .global _KERNEL_OPT_USB_DEBUG
 .equiv _KERNEL_OPT_USB_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_USB_DEBUG\n .global _KERNEL_OPT_USB_DEBUG\n .equiv _KERNEL_OPT_USB_DEBUG,0x6e074def\n .endif");
#endif
/* option `UHUB_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_UHUB_DEBUG
 .global _KERNEL_OPT_UHUB_DEBUG
 .equiv _KERNEL_OPT_UHUB_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_UHUB_DEBUG\n .global _KERNEL_OPT_UHUB_DEBUG\n .equiv _KERNEL_OPT_UHUB_DEBUG,0x6e074def\n .endif");
#endif
/* option `UHCI_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_UHCI_DEBUG
 .global _KERNEL_OPT_UHCI_DEBUG
 .equiv _KERNEL_OPT_UHCI_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_UHCI_DEBUG\n .global _KERNEL_OPT_UHCI_DEBUG\n .equiv _KERNEL_OPT_UHCI_DEBUG,0x6e074def\n .endif");
#endif
/* option `OHCI_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_OHCI_DEBUG
 .global _KERNEL_OPT_OHCI_DEBUG
 .equiv _KERNEL_OPT_OHCI_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_OHCI_DEBUG\n .global _KERNEL_OPT_OHCI_DEBUG\n .equiv _KERNEL_OPT_OHCI_DEBUG,0x6e074def\n .endif");
#endif
/* option `EHCI_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_EHCI_DEBUG
 .global _KERNEL_OPT_EHCI_DEBUG
 .equiv _KERNEL_OPT_EHCI_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_EHCI_DEBUG\n .global _KERNEL_OPT_EHCI_DEBUG\n .equiv _KERNEL_OPT_EHCI_DEBUG,0x6e074def\n .endif");
#endif
