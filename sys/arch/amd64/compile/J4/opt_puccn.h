/* option `PUCCN' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PUCCN
 .global _KERNEL_OPT_PUCCN
 .equiv _KERNEL_OPT_PUCCN,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PUCCN\n .global _KERNEL_OPT_PUCCN\n .equiv _KERNEL_OPT_PUCCN,0x6e074def\n .endif");
#endif
