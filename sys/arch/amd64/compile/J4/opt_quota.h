#define	QUOTA2	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_QUOTA2
 .global _KERNEL_OPT_QUOTA2
 .equiv _KERNEL_OPT_QUOTA2,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_QUOTA2\n .global _KERNEL_OPT_QUOTA2\n .equiv _KERNEL_OPT_QUOTA2,0x1\n .endif");
#endif
#define	QUOTA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_QUOTA
 .global _KERNEL_OPT_QUOTA
 .equiv _KERNEL_OPT_QUOTA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_QUOTA\n .global _KERNEL_OPT_QUOTA\n .equiv _KERNEL_OPT_QUOTA,0x1\n .endif");
#endif
