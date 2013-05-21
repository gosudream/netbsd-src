#define	NDPTI	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NDPTI
 .global _KERNEL_OPT_NDPTI
 .equiv _KERNEL_OPT_NDPTI,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NDPTI\n .global _KERNEL_OPT_NDPTI\n .equiv _KERNEL_OPT_NDPTI,0x0\n .endif");
#endif
