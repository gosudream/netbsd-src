/* option `GENFB_SHADOWFB' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_GENFB_SHADOWFB
 .global _KERNEL_OPT_GENFB_SHADOWFB
 .equiv _KERNEL_OPT_GENFB_SHADOWFB,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_GENFB_SHADOWFB\n .global _KERNEL_OPT_GENFB_SHADOWFB\n .equiv _KERNEL_OPT_GENFB_SHADOWFB,0x6e074def\n .endif");
#endif
/* option `GENFB_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_GENFB_DEBUG
 .global _KERNEL_OPT_GENFB_DEBUG
 .equiv _KERNEL_OPT_GENFB_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_GENFB_DEBUG\n .global _KERNEL_OPT_GENFB_DEBUG\n .equiv _KERNEL_OPT_GENFB_DEBUG,0x6e074def\n .endif");
#endif
