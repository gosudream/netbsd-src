/* option `COMPAT_IBCS2' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_IBCS2
 .global _KERNEL_OPT_COMPAT_IBCS2
 .equiv _KERNEL_OPT_COMPAT_IBCS2,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_IBCS2\n .global _KERNEL_OPT_COMPAT_IBCS2\n .equiv _KERNEL_OPT_COMPAT_IBCS2,0x6e074def\n .endif");
#endif
