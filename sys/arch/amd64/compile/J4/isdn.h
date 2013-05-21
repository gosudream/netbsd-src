#define	NISDN	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NISDN
 .global _KERNEL_OPT_NISDN
 .equiv _KERNEL_OPT_NISDN,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NISDN\n .global _KERNEL_OPT_NISDN\n .equiv _KERNEL_OPT_NISDN,0x0\n .endif");
#endif
