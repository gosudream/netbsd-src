#define	NIRIP	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NIRIP
 .global _KERNEL_OPT_NIRIP
 .equiv _KERNEL_OPT_NIRIP,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NIRIP\n .global _KERNEL_OPT_NIRIP\n .equiv _KERNEL_OPT_NIRIP,0x0\n .endif");
#endif
