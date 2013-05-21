#define	NCCD	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCCD
 .global _KERNEL_OPT_NCCD
 .equiv _KERNEL_OPT_NCCD,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCCD\n .global _KERNEL_OPT_NCCD\n .equiv _KERNEL_OPT_NCCD,0x1\n .endif");
#endif
