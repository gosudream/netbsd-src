#define	NRTL80X9	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NRTL80X9
 .global _KERNEL_OPT_NRTL80X9
 .equiv _KERNEL_OPT_NRTL80X9,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NRTL80X9\n .global _KERNEL_OPT_NRTL80X9\n .equiv _KERNEL_OPT_NRTL80X9,0x1\n .endif");
#endif
