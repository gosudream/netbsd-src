#define	VMSWAP	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VMSWAP
 .global _KERNEL_OPT_VMSWAP
 .equiv _KERNEL_OPT_VMSWAP,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VMSWAP\n .global _KERNEL_OPT_VMSWAP\n .equiv _KERNEL_OPT_VMSWAP,0x1\n .endif");
#endif
