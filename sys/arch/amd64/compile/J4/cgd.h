#define	NCGD	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCGD
 .global _KERNEL_OPT_NCGD
 .equiv _KERNEL_OPT_NCGD,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCGD\n .global _KERNEL_OPT_NCGD\n .equiv _KERNEL_OPT_NCGD,0x1\n .endif");
#endif
