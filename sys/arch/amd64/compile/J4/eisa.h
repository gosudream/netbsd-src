/* option `EISA' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_EISA
 .global _KERNEL_OPT_EISA
 .equiv _KERNEL_OPT_EISA,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_EISA\n .global _KERNEL_OPT_EISA\n .equiv _KERNEL_OPT_EISA,0x6e074def\n .endif");
#endif
