/* option `TCP_COMPAT_42' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_TCP_COMPAT_42
 .global _KERNEL_OPT_TCP_COMPAT_42
 .equiv _KERNEL_OPT_TCP_COMPAT_42,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_TCP_COMPAT_42\n .global _KERNEL_OPT_TCP_COMPAT_42\n .equiv _KERNEL_OPT_TCP_COMPAT_42,0x6e074def\n .endif");
#endif
