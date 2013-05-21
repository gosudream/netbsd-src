#define	NISDNBCHAN	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NISDNBCHAN
 .global _KERNEL_OPT_NISDNBCHAN
 .equiv _KERNEL_OPT_NISDNBCHAN,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NISDNBCHAN\n .global _KERNEL_OPT_NISDNBCHAN\n .equiv _KERNEL_OPT_NISDNBCHAN,0x0\n .endif");
#endif
