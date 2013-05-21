#define	ATADEBUG	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ATADEBUG
 .global _KERNEL_OPT_ATADEBUG
 .equiv _KERNEL_OPT_ATADEBUG,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ATADEBUG\n .global _KERNEL_OPT_ATADEBUG\n .equiv _KERNEL_OPT_ATADEBUG,0x1\n .endif");
#endif
