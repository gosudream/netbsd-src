#define	NWT	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NWT
 .global _KERNEL_OPT_NWT
 .equiv _KERNEL_OPT_NWT,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NWT\n .global _KERNEL_OPT_NWT\n .equiv _KERNEL_OPT_NWT,0x0\n .endif");
#endif
