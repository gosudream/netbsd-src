#define	NJOY	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NJOY
 .global _KERNEL_OPT_NJOY
 .equiv _KERNEL_OPT_NJOY,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NJOY\n .global _KERNEL_OPT_NJOY\n .equiv _KERNEL_OPT_NJOY,0x1\n .endif");
#endif
