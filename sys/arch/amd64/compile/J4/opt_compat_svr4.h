/* option `SVR4_COMPAT_SOLARIS2' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SVR4_COMPAT_SOLARIS2
 .global _KERNEL_OPT_SVR4_COMPAT_SOLARIS2
 .equiv _KERNEL_OPT_SVR4_COMPAT_SOLARIS2,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SVR4_COMPAT_SOLARIS2\n .global _KERNEL_OPT_SVR4_COMPAT_SOLARIS2\n .equiv _KERNEL_OPT_SVR4_COMPAT_SOLARIS2,0x6e074def\n .endif");
#endif
/* option `COMPAT_SVR4_32' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_SVR4_32
 .global _KERNEL_OPT_COMPAT_SVR4_32
 .equiv _KERNEL_OPT_COMPAT_SVR4_32,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_SVR4_32\n .global _KERNEL_OPT_COMPAT_SVR4_32\n .equiv _KERNEL_OPT_COMPAT_SVR4_32,0x6e074def\n .endif");
#endif
/* option `COMPAT_SVR4' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_SVR4
 .global _KERNEL_OPT_COMPAT_SVR4
 .equiv _KERNEL_OPT_COMPAT_SVR4,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_SVR4\n .global _KERNEL_OPT_COMPAT_SVR4\n .equiv _KERNEL_OPT_COMPAT_SVR4,0x6e074def\n .endif");
#endif
