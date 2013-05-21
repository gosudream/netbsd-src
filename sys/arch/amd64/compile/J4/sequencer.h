#define	NSEQUENCER	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSEQUENCER
 .global _KERNEL_OPT_NSEQUENCER
 .equiv _KERNEL_OPT_NSEQUENCER,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSEQUENCER\n .global _KERNEL_OPT_NSEQUENCER\n .equiv _KERNEL_OPT_NSEQUENCER,0x1\n .endif");
#endif
