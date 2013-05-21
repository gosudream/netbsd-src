#define	NPCDISPLAY	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPCDISPLAY
 .global _KERNEL_OPT_NPCDISPLAY
 .equiv _KERNEL_OPT_NPCDISPLAY,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPCDISPLAY\n .global _KERNEL_OPT_NPCDISPLAY\n .equiv _KERNEL_OPT_NPCDISPLAY,0x0\n .endif");
#endif
