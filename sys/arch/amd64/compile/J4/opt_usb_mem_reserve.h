/* option `USB_MEM_RESERVE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_USB_MEM_RESERVE
 .global _KERNEL_OPT_USB_MEM_RESERVE
 .equiv _KERNEL_OPT_USB_MEM_RESERVE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_USB_MEM_RESERVE\n .global _KERNEL_OPT_USB_MEM_RESERVE\n .equiv _KERNEL_OPT_USB_MEM_RESERVE,0x6e074def\n .endif");
#endif
