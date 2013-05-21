#define	NMPU_YM	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NMPU_YM
 .global _KERNEL_OPT_NMPU_YM
 .equiv _KERNEL_OPT_NMPU_YM,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NMPU_YM\n .global _KERNEL_OPT_NMPU_YM\n .equiv _KERNEL_OPT_NMPU_YM,0x0\n .endif");
#endif
