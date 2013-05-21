#define	NATTIMER	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATTIMER
 .global _KERNEL_OPT_NATTIMER
 .equiv _KERNEL_OPT_NATTIMER,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATTIMER\n .global _KERNEL_OPT_NATTIMER\n .equiv _KERNEL_OPT_NATTIMER,0x1\n .endif");
#endif
