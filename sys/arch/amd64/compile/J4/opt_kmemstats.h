/* option `KMEMSTATS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_KMEMSTATS
 .global _KERNEL_OPT_KMEMSTATS
 .equiv _KERNEL_OPT_KMEMSTATS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_KMEMSTATS\n .global _KERNEL_OPT_KMEMSTATS\n .equiv _KERNEL_OPT_KMEMSTATS,0x6e074def\n .endif");
#endif
