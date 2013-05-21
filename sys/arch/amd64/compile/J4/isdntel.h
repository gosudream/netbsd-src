#define	NISDNTEL	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NISDNTEL
 .global _KERNEL_OPT_NISDNTEL
 .equiv _KERNEL_OPT_NISDNTEL,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NISDNTEL\n .global _KERNEL_OPT_NISDNTEL\n .equiv _KERNEL_OPT_NISDNTEL,0x0\n .endif");
#endif
