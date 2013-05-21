/* option `COMPAT_OSF1' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_OSF1
 .global _KERNEL_OPT_COMPAT_OSF1
 .equiv _KERNEL_OPT_COMPAT_OSF1,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_OSF1\n .global _KERNEL_OPT_COMPAT_OSF1\n .equiv _KERNEL_OPT_COMPAT_OSF1,0x6e074def\n .endif");
#endif
