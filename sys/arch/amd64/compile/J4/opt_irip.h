/* option `IRIP_VJ' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IRIP_VJ
 .global _KERNEL_OPT_IRIP_VJ
 .equiv _KERNEL_OPT_IRIP_VJ,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IRIP_VJ\n .global _KERNEL_OPT_IRIP_VJ\n .equiv _KERNEL_OPT_IRIP_VJ,0x6e074def\n .endif");
#endif
