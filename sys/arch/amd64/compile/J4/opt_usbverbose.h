/* option `USBVERBOSE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_USBVERBOSE
 .global _KERNEL_OPT_USBVERBOSE
 .equiv _KERNEL_OPT_USBVERBOSE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_USBVERBOSE\n .global _KERNEL_OPT_USBVERBOSE\n .equiv _KERNEL_OPT_USBVERBOSE,0x6e074def\n .endif");
#endif
