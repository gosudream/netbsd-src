#define	NDOTG	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NDOTG
 .global _KERNEL_OPT_NDOTG
 .equiv _KERNEL_OPT_NDOTG,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NDOTG\n .global _KERNEL_OPT_NDOTG\n .equiv _KERNEL_OPT_NDOTG,0x0\n .endif");
#endif
