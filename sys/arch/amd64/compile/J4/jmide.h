#define	NJMIDE	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NJMIDE
 .global _KERNEL_OPT_NJMIDE
 .equiv _KERNEL_OPT_NJMIDE,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NJMIDE\n .global _KERNEL_OPT_NJMIDE\n .equiv _KERNEL_OPT_NJMIDE,0x1\n .endif");
#endif
#define	NJMAHCI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NJMAHCI
 .global _KERNEL_OPT_NJMAHCI
 .equiv _KERNEL_OPT_NJMAHCI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NJMAHCI\n .global _KERNEL_OPT_NJMAHCI\n .equiv _KERNEL_OPT_NJMAHCI,0x1\n .endif");
#endif
