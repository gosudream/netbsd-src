/* option `SLHCI_PROFILE_TRANSFER' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SLHCI_PROFILE_TRANSFER
 .global _KERNEL_OPT_SLHCI_PROFILE_TRANSFER
 .equiv _KERNEL_OPT_SLHCI_PROFILE_TRANSFER,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SLHCI_PROFILE_TRANSFER\n .global _KERNEL_OPT_SLHCI_PROFILE_TRANSFER\n .equiv _KERNEL_OPT_SLHCI_PROFILE_TRANSFER,0x6e074def\n .endif");
#endif
/* option `SLHCI_TRY_LSVH' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SLHCI_TRY_LSVH
 .global _KERNEL_OPT_SLHCI_TRY_LSVH
 .equiv _KERNEL_OPT_SLHCI_TRY_LSVH,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SLHCI_TRY_LSVH\n .global _KERNEL_OPT_SLHCI_TRY_LSVH\n .equiv _KERNEL_OPT_SLHCI_TRY_LSVH,0x6e074def\n .endif");
#endif
/* option `SLHCI_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SLHCI_DEBUG
 .global _KERNEL_OPT_SLHCI_DEBUG
 .equiv _KERNEL_OPT_SLHCI_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SLHCI_DEBUG\n .global _KERNEL_OPT_SLHCI_DEBUG\n .equiv _KERNEL_OPT_SLHCI_DEBUG,0x6e074def\n .endif");
#endif
