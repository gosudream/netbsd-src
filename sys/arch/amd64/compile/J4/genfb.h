#define	NGENFB	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NGENFB
 .global _KERNEL_OPT_NGENFB
 .equiv _KERNEL_OPT_NGENFB,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NGENFB\n .global _KERNEL_OPT_NGENFB\n .equiv _KERNEL_OPT_NGENFB,0x1\n .endif");
#endif
