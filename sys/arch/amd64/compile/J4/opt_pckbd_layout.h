/* option `PCKBD_LAYOUT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCKBD_LAYOUT
 .global _KERNEL_OPT_PCKBD_LAYOUT
 .equiv _KERNEL_OPT_PCKBD_LAYOUT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCKBD_LAYOUT\n .global _KERNEL_OPT_PCKBD_LAYOUT\n .equiv _KERNEL_OPT_PCKBD_LAYOUT,0x6e074def\n .endif");
#endif
