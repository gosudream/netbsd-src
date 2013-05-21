#define	NISDNTRC	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NISDNTRC
 .global _KERNEL_OPT_NISDNTRC
 .equiv _KERNEL_OPT_NISDNTRC,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NISDNTRC\n .global _KERNEL_OPT_NISDNTRC\n .equiv _KERNEL_OPT_NISDNTRC,0x0\n .endif");
#endif
