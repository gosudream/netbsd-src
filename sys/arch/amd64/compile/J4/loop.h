#define	NLOOP	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NLOOP
 .global _KERNEL_OPT_NLOOP
 .equiv _KERNEL_OPT_NLOOP,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NLOOP\n .global _KERNEL_OPT_NLOOP\n .equiv _KERNEL_OPT_NLOOP,0x1\n .endif");
#endif
