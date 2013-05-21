/* option `MCD_PROMISC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MCD_PROMISC
 .global _KERNEL_OPT_MCD_PROMISC
 .equiv _KERNEL_OPT_MCD_PROMISC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MCD_PROMISC\n .global _KERNEL_OPT_MCD_PROMISC\n .equiv _KERNEL_OPT_MCD_PROMISC,0x6e074def\n .endif");
#endif
