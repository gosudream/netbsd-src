#define	NPCKBC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPCKBC
 .global _KERNEL_OPT_NPCKBC
 .equiv _KERNEL_OPT_NPCKBC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPCKBC\n .global _KERNEL_OPT_NPCKBC\n .equiv _KERNEL_OPT_NPCKBC,0x1\n .endif");
#endif
