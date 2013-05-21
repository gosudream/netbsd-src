#define	NRADIO	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NRADIO
 .global _KERNEL_OPT_NRADIO
 .equiv _KERNEL_OPT_NRADIO,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NRADIO\n .global _KERNEL_OPT_NRADIO\n .equiv _KERNEL_OPT_NRADIO,0x1\n .endif");
#endif
