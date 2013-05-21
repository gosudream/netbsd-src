#define	NURIO	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NURIO
 .global _KERNEL_OPT_NURIO
 .equiv _KERNEL_OPT_NURIO,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NURIO\n .global _KERNEL_OPT_NURIO\n .equiv _KERNEL_OPT_NURIO,0x1\n .endif");
#endif
