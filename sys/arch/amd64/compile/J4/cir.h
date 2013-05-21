#define	NCIR	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCIR
 .global _KERNEL_OPT_NCIR
 .equiv _KERNEL_OPT_NCIR,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCIR\n .global _KERNEL_OPT_NCIR\n .equiv _KERNEL_OPT_NCIR,0x1\n .endif");
#endif
