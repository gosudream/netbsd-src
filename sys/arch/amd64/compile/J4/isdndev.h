#define	NISDNDEV	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NISDNDEV
 .global _KERNEL_OPT_NISDNDEV
 .equiv _KERNEL_OPT_NISDNDEV,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NISDNDEV\n .global _KERNEL_OPT_NISDNDEV\n .equiv _KERNEL_OPT_NISDNDEV,0x0\n .endif");
#endif
