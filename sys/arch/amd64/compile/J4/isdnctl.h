#define	NISDNCTL	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NISDNCTL
 .global _KERNEL_OPT_NISDNCTL
 .equiv _KERNEL_OPT_NISDNCTL,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NISDNCTL\n .global _KERNEL_OPT_NISDNCTL\n .equiv _KERNEL_OPT_NISDNCTL,0x0\n .endif");
#endif
