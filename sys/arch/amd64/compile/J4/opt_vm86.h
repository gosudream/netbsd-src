/* option `VM86' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VM86
 .global _KERNEL_OPT_VM86
 .equiv _KERNEL_OPT_VM86,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VM86\n .global _KERNEL_OPT_VM86\n .equiv _KERNEL_OPT_VM86,0x6e074def\n .endif");
#endif
