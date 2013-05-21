#define	NGIF	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NGIF
 .global _KERNEL_OPT_NGIF
 .equiv _KERNEL_OPT_NGIF,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NGIF\n .global _KERNEL_OPT_NGIF\n .equiv _KERNEL_OPT_NGIF,0x1\n .endif");
#endif
