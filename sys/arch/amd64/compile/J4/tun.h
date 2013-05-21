#define	NTUN	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NTUN
 .global _KERNEL_OPT_NTUN
 .equiv _KERNEL_OPT_NTUN,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NTUN\n .global _KERNEL_OPT_NTUN\n .equiv _KERNEL_OPT_NTUN,0x1\n .endif");
#endif
