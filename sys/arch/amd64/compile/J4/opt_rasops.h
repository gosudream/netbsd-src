/* option `RASOPS_SMALL' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RASOPS_SMALL
 .global _KERNEL_OPT_RASOPS_SMALL
 .equiv _KERNEL_OPT_RASOPS_SMALL,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RASOPS_SMALL\n .global _KERNEL_OPT_RASOPS_SMALL\n .equiv _KERNEL_OPT_RASOPS_SMALL,0x6e074def\n .endif");
#endif
/* option `RASOPS_CLIPPING' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RASOPS_CLIPPING
 .global _KERNEL_OPT_RASOPS_CLIPPING
 .equiv _KERNEL_OPT_RASOPS_CLIPPING,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RASOPS_CLIPPING\n .global _KERNEL_OPT_RASOPS_CLIPPING\n .equiv _KERNEL_OPT_RASOPS_CLIPPING,0x6e074def\n .endif");
#endif
#define	RASOPS_DEFAULT_WIDTH	80
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RASOPS_DEFAULT_WIDTH
 .global _KERNEL_OPT_RASOPS_DEFAULT_WIDTH
 .equiv _KERNEL_OPT_RASOPS_DEFAULT_WIDTH,0x50
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RASOPS_DEFAULT_WIDTH\n .global _KERNEL_OPT_RASOPS_DEFAULT_WIDTH\n .equiv _KERNEL_OPT_RASOPS_DEFAULT_WIDTH,0x50\n .endif");
#endif
#define	RASOPS_DEFAULT_HEIGHT	25
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RASOPS_DEFAULT_HEIGHT
 .global _KERNEL_OPT_RASOPS_DEFAULT_HEIGHT
 .equiv _KERNEL_OPT_RASOPS_DEFAULT_HEIGHT,0x19
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RASOPS_DEFAULT_HEIGHT\n .global _KERNEL_OPT_RASOPS_DEFAULT_HEIGHT\n .equiv _KERNEL_OPT_RASOPS_DEFAULT_HEIGHT,0x19\n .endif");
#endif