#define	NICP	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NICP
 .global _KERNEL_OPT_NICP
 .equiv _KERNEL_OPT_NICP,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NICP\n .global _KERNEL_OPT_NICP\n .equiv _KERNEL_OPT_NICP,0x1\n .endif");
#endif
