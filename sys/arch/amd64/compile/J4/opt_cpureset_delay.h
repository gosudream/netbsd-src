/* option `CPURESET_DELAY' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_CPURESET_DELAY
 .global _KERNEL_OPT_CPURESET_DELAY
 .equiv _KERNEL_OPT_CPURESET_DELAY,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_CPURESET_DELAY\n .global _KERNEL_OPT_CPURESET_DELAY\n .equiv _KERNEL_OPT_CPURESET_DELAY,0x6e074def\n .endif");
#endif
