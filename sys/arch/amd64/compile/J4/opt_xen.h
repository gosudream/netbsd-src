/* option `DO_NOT_DEFINE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_DO_NOT_DEFINE
 .global _KERNEL_OPT_DO_NOT_DEFINE
 .equiv _KERNEL_OPT_DO_NOT_DEFINE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_DO_NOT_DEFINE\n .global _KERNEL_OPT_DO_NOT_DEFINE\n .equiv _KERNEL_OPT_DO_NOT_DEFINE,0x6e074def\n .endif");
#endif
