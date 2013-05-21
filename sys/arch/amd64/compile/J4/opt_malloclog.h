/* option `MALLOCLOG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MALLOCLOG
 .global _KERNEL_OPT_MALLOCLOG
 .equiv _KERNEL_OPT_MALLOCLOG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MALLOCLOG\n .global _KERNEL_OPT_MALLOCLOG\n .equiv _KERNEL_OPT_MALLOCLOG,0x6e074def\n .endif");
#endif
/* option `MALLOCLOGSIZE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MALLOCLOGSIZE
 .global _KERNEL_OPT_MALLOCLOGSIZE
 .equiv _KERNEL_OPT_MALLOCLOGSIZE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MALLOCLOGSIZE\n .global _KERNEL_OPT_MALLOCLOGSIZE\n .equiv _KERNEL_OPT_MALLOCLOGSIZE,0x6e074def\n .endif");
#endif
