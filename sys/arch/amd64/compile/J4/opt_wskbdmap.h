/* option `WSKBD_USONLY' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSKBD_USONLY
 .global _KERNEL_OPT_WSKBD_USONLY
 .equiv _KERNEL_OPT_WSKBD_USONLY,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSKBD_USONLY\n .global _KERNEL_OPT_WSKBD_USONLY\n .equiv _KERNEL_OPT_WSKBD_USONLY,0x6e074def\n .endif");
#endif
