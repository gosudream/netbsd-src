#define	PFIL_HOOKS	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PFIL_HOOKS
 .global _KERNEL_OPT_PFIL_HOOKS
 .equiv _KERNEL_OPT_PFIL_HOOKS,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PFIL_HOOKS\n .global _KERNEL_OPT_PFIL_HOOKS\n .equiv _KERNEL_OPT_PFIL_HOOKS,0x1\n .endif");
#endif
