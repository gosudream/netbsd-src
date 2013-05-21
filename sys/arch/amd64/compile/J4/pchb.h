#define	NPCHB	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPCHB
 .global _KERNEL_OPT_NPCHB
 .equiv _KERNEL_OPT_NPCHB,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPCHB\n .global _KERNEL_OPT_NPCHB\n .equiv _KERNEL_OPT_NPCHB,0x1\n .endif");
#endif
