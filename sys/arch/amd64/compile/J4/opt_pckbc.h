/* option `PCKBCNOTEST' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCKBCNOTEST
 .global _KERNEL_OPT_PCKBCNOTEST
 .equiv _KERNEL_OPT_PCKBCNOTEST,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCKBCNOTEST\n .global _KERNEL_OPT_PCKBCNOTEST\n .equiv _KERNEL_OPT_PCKBCNOTEST,0x6e074def\n .endif");
#endif
