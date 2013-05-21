/* option `R128FB_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_R128FB_DEBUG
 .global _KERNEL_OPT_R128FB_DEBUG
 .equiv _KERNEL_OPT_R128FB_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_R128FB_DEBUG\n .global _KERNEL_OPT_R128FB_DEBUG\n .equiv _KERNEL_OPT_R128FB_DEBUG,0x6e074def\n .endif");
#endif
/* option `R128FB_WAIT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_R128FB_WAIT
 .global _KERNEL_OPT_R128FB_WAIT
 .equiv _KERNEL_OPT_R128FB_WAIT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_R128FB_WAIT\n .global _KERNEL_OPT_R128FB_WAIT\n .equiv _KERNEL_OPT_R128FB_WAIT,0x6e074def\n .endif");
#endif
