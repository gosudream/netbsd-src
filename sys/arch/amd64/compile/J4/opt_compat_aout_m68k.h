/* option `COMPAT_AOUT_M68K' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_AOUT_M68K
 .global _KERNEL_OPT_COMPAT_AOUT_M68K
 .equiv _KERNEL_OPT_COMPAT_AOUT_M68K,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_AOUT_M68K\n .global _KERNEL_OPT_COMPAT_AOUT_M68K\n .equiv _KERNEL_OPT_COMPAT_AOUT_M68K,0x6e074def\n .endif");
#endif
