#define	NUGEN	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUGEN
 .global _KERNEL_OPT_NUGEN
 .equiv _KERNEL_OPT_NUGEN,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUGEN\n .global _KERNEL_OPT_NUGEN\n .equiv _KERNEL_OPT_NUGEN,0x1\n .endif");
#endif
