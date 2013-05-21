#define	NBKTR	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NBKTR
 .global _KERNEL_OPT_NBKTR
 .equiv _KERNEL_OPT_NBKTR,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NBKTR\n .global _KERNEL_OPT_NBKTR\n .equiv _KERNEL_OPT_NBKTR,0x1\n .endif");
#endif
