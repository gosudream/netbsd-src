/* option `ISCSI_TEST_MODE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ISCSI_TEST_MODE
 .global _KERNEL_OPT_ISCSI_TEST_MODE
 .equiv _KERNEL_OPT_ISCSI_TEST_MODE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ISCSI_TEST_MODE\n .global _KERNEL_OPT_ISCSI_TEST_MODE\n .equiv _KERNEL_OPT_ISCSI_TEST_MODE,0x6e074def\n .endif");
#endif
