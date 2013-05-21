#define	NMLY	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NMLY
 .global _KERNEL_OPT_NMLY
 .equiv _KERNEL_OPT_NMLY,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NMLY\n .global _KERNEL_OPT_NMLY\n .equiv _KERNEL_OPT_NMLY,0x1\n .endif");
#endif
