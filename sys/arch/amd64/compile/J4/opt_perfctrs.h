/* option `PERFCTRS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PERFCTRS
 .global _KERNEL_OPT_PERFCTRS
 .equiv _KERNEL_OPT_PERFCTRS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PERFCTRS\n .global _KERNEL_OPT_PERFCTRS\n .equiv _KERNEL_OPT_PERFCTRS,0x6e074def\n .endif");
#endif
