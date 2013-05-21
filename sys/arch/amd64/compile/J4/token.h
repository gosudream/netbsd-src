#define	NTOKEN	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NTOKEN
 .global _KERNEL_OPT_NTOKEN
 .equiv _KERNEL_OPT_NTOKEN,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NTOKEN\n .global _KERNEL_OPT_NTOKEN\n .equiv _KERNEL_OPT_NTOKEN,0x0\n .endif");
#endif
