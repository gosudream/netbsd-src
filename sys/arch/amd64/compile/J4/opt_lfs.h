/* option `LFS_KERNEL_RFW' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_LFS_KERNEL_RFW
 .global _KERNEL_OPT_LFS_KERNEL_RFW
 .equiv _KERNEL_OPT_LFS_KERNEL_RFW,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_LFS_KERNEL_RFW\n .global _KERNEL_OPT_LFS_KERNEL_RFW\n .equiv _KERNEL_OPT_LFS_KERNEL_RFW,0x6e074def\n .endif");
#endif
