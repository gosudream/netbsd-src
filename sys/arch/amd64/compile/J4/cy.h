#define	NCY	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCY
 .global _KERNEL_OPT_NCY
 .equiv _KERNEL_OPT_NCY,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCY\n .global _KERNEL_OPT_NCY\n .equiv _KERNEL_OPT_NCY,0x1\n .endif");
#endif
