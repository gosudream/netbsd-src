#define	NATAPIBUS	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATAPIBUS
 .global _KERNEL_OPT_NATAPIBUS
 .equiv _KERNEL_OPT_NATAPIBUS,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATAPIBUS\n .global _KERNEL_OPT_NATAPIBUS\n .equiv _KERNEL_OPT_NATAPIBUS,0x1\n .endif");
#endif
