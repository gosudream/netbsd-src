/* option `POOL_LOGSIZE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_POOL_LOGSIZE
 .global _KERNEL_OPT_POOL_LOGSIZE
 .equiv _KERNEL_OPT_POOL_LOGSIZE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_POOL_LOGSIZE\n .global _KERNEL_OPT_POOL_LOGSIZE\n .equiv _KERNEL_OPT_POOL_LOGSIZE,0x6e074def\n .endif");
#endif
