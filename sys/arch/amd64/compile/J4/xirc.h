#define	NXIRC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NXIRC
 .global _KERNEL_OPT_NXIRC
 .equiv _KERNEL_OPT_NXIRC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NXIRC\n .global _KERNEL_OPT_NXIRC\n .equiv _KERNEL_OPT_NXIRC,0x1\n .endif");
#endif
#define	NCOM_XIRC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCOM_XIRC
 .global _KERNEL_OPT_NCOM_XIRC
 .equiv _KERNEL_OPT_NCOM_XIRC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCOM_XIRC\n .global _KERNEL_OPT_NCOM_XIRC\n .equiv _KERNEL_OPT_NCOM_XIRC,0x1\n .endif");
#endif
#define	NXI_XIRC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NXI_XIRC
 .global _KERNEL_OPT_NXI_XIRC
 .equiv _KERNEL_OPT_NXI_XIRC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NXI_XIRC\n .global _KERNEL_OPT_NXI_XIRC\n .equiv _KERNEL_OPT_NXI_XIRC,0x1\n .endif");
#endif
