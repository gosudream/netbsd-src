/* option `BTKBD_REPEAT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_BTKBD_REPEAT
 .global _KERNEL_OPT_BTKBD_REPEAT
 .equiv _KERNEL_OPT_BTKBD_REPEAT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_BTKBD_REPEAT\n .global _KERNEL_OPT_BTKBD_REPEAT\n .equiv _KERNEL_OPT_BTKBD_REPEAT,0x6e074def\n .endif");
#endif
/* option `BTKBD_LAYOUT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_BTKBD_LAYOUT
 .global _KERNEL_OPT_BTKBD_LAYOUT
 .equiv _KERNEL_OPT_BTKBD_LAYOUT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_BTKBD_LAYOUT\n .global _KERNEL_OPT_BTKBD_LAYOUT\n .equiv _KERNEL_OPT_BTKBD_LAYOUT,0x6e074def\n .endif");
#endif
