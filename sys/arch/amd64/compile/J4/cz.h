#define	NCZ	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCZ
 .global _KERNEL_OPT_NCZ
 .equiv _KERNEL_OPT_NCZ,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCZ\n .global _KERNEL_OPT_NCZ\n .equiv _KERNEL_OPT_NCZ,0x1\n .endif");
#endif
