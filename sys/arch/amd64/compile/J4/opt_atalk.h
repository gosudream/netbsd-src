#define	NETATALK	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NETATALK
 .global _KERNEL_OPT_NETATALK
 .equiv _KERNEL_OPT_NETATALK,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NETATALK\n .global _KERNEL_OPT_NETATALK\n .equiv _KERNEL_OPT_NETATALK,0x1\n .endif");
#endif
