#define	NUEP	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUEP
 .global _KERNEL_OPT_NUEP
 .equiv _KERNEL_OPT_NUEP,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUEP\n .global _KERNEL_OPT_NUEP\n .equiv _KERNEL_OPT_NUEP,0x1\n .endif");
#endif
