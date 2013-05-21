/* option `USER_LDT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_USER_LDT
 .global _KERNEL_OPT_USER_LDT
 .equiv _KERNEL_OPT_USER_LDT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_USER_LDT\n .global _KERNEL_OPT_USER_LDT\n .equiv _KERNEL_OPT_USER_LDT,0x6e074def\n .endif");
#endif
