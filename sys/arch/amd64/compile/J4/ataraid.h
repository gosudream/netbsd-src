#define	NATARAID	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATARAID
 .global _KERNEL_OPT_NATARAID
 .equiv _KERNEL_OPT_NATARAID,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATARAID\n .global _KERNEL_OPT_NATARAID\n .equiv _KERNEL_OPT_NATARAID,0x1\n .endif");
#endif
