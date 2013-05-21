#define	NUKBD	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUKBD
 .global _KERNEL_OPT_NUKBD
 .equiv _KERNEL_OPT_NUKBD,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUKBD\n .global _KERNEL_OPT_NUKBD\n .equiv _KERNEL_OPT_NUKBD,0x1\n .endif");
#endif
