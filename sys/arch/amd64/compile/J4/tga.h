#define	NTGA	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NTGA
 .global _KERNEL_OPT_NTGA
 .equiv _KERNEL_OPT_NTGA,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NTGA\n .global _KERNEL_OPT_NTGA\n .equiv _KERNEL_OPT_NTGA,0x0\n .endif");
#endif
