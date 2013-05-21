/* option `BRIDGE_IPF' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_BRIDGE_IPF
 .global _KERNEL_OPT_BRIDGE_IPF
 .equiv _KERNEL_OPT_BRIDGE_IPF,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_BRIDGE_IPF\n .global _KERNEL_OPT_BRIDGE_IPF\n .equiv _KERNEL_OPT_BRIDGE_IPF,0x6e074def\n .endif");
#endif
