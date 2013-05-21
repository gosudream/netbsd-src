#define	NUHID	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUHID
 .global _KERNEL_OPT_NUHID
 .equiv _KERNEL_OPT_NUHID,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUHID\n .global _KERNEL_OPT_NUHID\n .equiv _KERNEL_OPT_NUHID,0x1\n .endif");
#endif
