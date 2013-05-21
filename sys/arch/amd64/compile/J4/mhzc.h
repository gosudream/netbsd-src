#define	NMHZC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NMHZC
 .global _KERNEL_OPT_NMHZC
 .equiv _KERNEL_OPT_NMHZC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NMHZC\n .global _KERNEL_OPT_NMHZC\n .equiv _KERNEL_OPT_NMHZC,0x1\n .endif");
#endif
#define	NCOM_MHZC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCOM_MHZC
 .global _KERNEL_OPT_NCOM_MHZC
 .equiv _KERNEL_OPT_NCOM_MHZC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCOM_MHZC\n .global _KERNEL_OPT_NCOM_MHZC\n .equiv _KERNEL_OPT_NCOM_MHZC,0x1\n .endif");
#endif
#define	NSM_MHZC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSM_MHZC
 .global _KERNEL_OPT_NSM_MHZC
 .equiv _KERNEL_OPT_NSM_MHZC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSM_MHZC\n .global _KERNEL_OPT_NSM_MHZC\n .equiv _KERNEL_OPT_NSM_MHZC,0x1\n .endif");
#endif
