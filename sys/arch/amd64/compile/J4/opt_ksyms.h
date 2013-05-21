/* option `SYMTAB_SPACE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SYMTAB_SPACE
 .global _KERNEL_OPT_SYMTAB_SPACE
 .equiv _KERNEL_OPT_SYMTAB_SPACE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SYMTAB_SPACE\n .global _KERNEL_OPT_SYMTAB_SPACE\n .equiv _KERNEL_OPT_SYMTAB_SPACE,0x6e074def\n .endif");
#endif
