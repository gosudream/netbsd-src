/* option `EON' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_EON
 .global _KERNEL_OPT_EON
 .equiv _KERNEL_OPT_EON,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_EON\n .global _KERNEL_OPT_EON\n .equiv _KERNEL_OPT_EON,0x6e074def\n .endif");
#endif
