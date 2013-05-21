#define	NOHCI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NOHCI
 .global _KERNEL_OPT_NOHCI
 .equiv _KERNEL_OPT_NOHCI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NOHCI\n .global _KERNEL_OPT_NOHCI\n .equiv _KERNEL_OPT_NOHCI,0x1\n .endif");
#endif
