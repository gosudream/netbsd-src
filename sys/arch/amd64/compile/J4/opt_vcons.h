/* option `VCONS_INTR_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VCONS_INTR_DEBUG
 .global _KERNEL_OPT_VCONS_INTR_DEBUG
 .equiv _KERNEL_OPT_VCONS_INTR_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VCONS_INTR_DEBUG\n .global _KERNEL_OPT_VCONS_INTR_DEBUG\n .equiv _KERNEL_OPT_VCONS_INTR_DEBUG,0x6e074def\n .endif");
#endif
#define	VCONS_DRAW_INTR	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VCONS_DRAW_INTR
 .global _KERNEL_OPT_VCONS_DRAW_INTR
 .equiv _KERNEL_OPT_VCONS_DRAW_INTR,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VCONS_DRAW_INTR\n .global _KERNEL_OPT_VCONS_DRAW_INTR\n .equiv _KERNEL_OPT_VCONS_DRAW_INTR,0x1\n .endif");
#endif
