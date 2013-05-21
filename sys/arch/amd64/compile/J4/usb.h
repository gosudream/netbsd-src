#define	NUSB	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NUSB
 .global _KERNEL_OPT_NUSB
 .equiv _KERNEL_OPT_NUSB,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NUSB\n .global _KERNEL_OPT_NUSB\n .equiv _KERNEL_OPT_NUSB,0x1\n .endif");
#endif
