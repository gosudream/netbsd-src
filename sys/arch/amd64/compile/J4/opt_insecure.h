#define	INSECURE	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_INSECURE
 .global _KERNEL_OPT_INSECURE
 .equiv _KERNEL_OPT_INSECURE,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_INSECURE\n .global _KERNEL_OPT_INSECURE\n .equiv _KERNEL_OPT_INSECURE,0x1\n .endif");
#endif
