/* option `NATM' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATM
 .global _KERNEL_OPT_NATM
 .equiv _KERNEL_OPT_NATM,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATM\n .global _KERNEL_OPT_NATM\n .equiv _KERNEL_OPT_NATM,0x6e074def\n .endif");
#endif
