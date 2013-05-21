#define	RTC_OFFSET	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RTC_OFFSET
 .global _KERNEL_OPT_RTC_OFFSET
 .equiv _KERNEL_OPT_RTC_OFFSET,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RTC_OFFSET\n .global _KERNEL_OPT_RTC_OFFSET\n .equiv _KERNEL_OPT_RTC_OFFSET,0x0\n .endif");
#endif
