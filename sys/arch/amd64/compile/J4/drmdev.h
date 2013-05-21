#define	NDRMDEV	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NDRMDEV
 .global _KERNEL_OPT_NDRMDEV
 .equiv _KERNEL_OPT_NDRMDEV,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NDRMDEV\n .global _KERNEL_OPT_NDRMDEV\n .equiv _KERNEL_OPT_NDRMDEV,0x1\n .endif");
#endif
