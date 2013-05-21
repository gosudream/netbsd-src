#define	NWD	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NWD
 .global _KERNEL_OPT_NWD
 .equiv _KERNEL_OPT_NWD,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NWD\n .global _KERNEL_OPT_NWD\n .equiv _KERNEL_OPT_NWD,0x1\n .endif");
#endif
