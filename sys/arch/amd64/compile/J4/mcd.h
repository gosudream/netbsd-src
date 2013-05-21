#define	NMCD	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NMCD
 .global _KERNEL_OPT_NMCD
 .equiv _KERNEL_OPT_NMCD,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NMCD\n .global _KERNEL_OPT_NMCD\n .equiv _KERNEL_OPT_NMCD,0x0\n .endif");
#endif
