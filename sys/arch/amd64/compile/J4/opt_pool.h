/* option `POOL_DIAGNOSTIC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_POOL_DIAGNOSTIC
 .global _KERNEL_OPT_POOL_DIAGNOSTIC
 .equiv _KERNEL_OPT_POOL_DIAGNOSTIC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_POOL_DIAGNOSTIC\n .global _KERNEL_OPT_POOL_DIAGNOSTIC\n .equiv _KERNEL_OPT_POOL_DIAGNOSTIC,0x6e074def\n .endif");
#endif
