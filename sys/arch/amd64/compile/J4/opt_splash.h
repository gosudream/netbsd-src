/* option `SPLASHSCREEN' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SPLASHSCREEN
 .global _KERNEL_OPT_SPLASHSCREEN
 .equiv _KERNEL_OPT_SPLASHSCREEN,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SPLASHSCREEN\n .global _KERNEL_OPT_SPLASHSCREEN\n .equiv _KERNEL_OPT_SPLASHSCREEN,0x6e074def\n .endif");
#endif
