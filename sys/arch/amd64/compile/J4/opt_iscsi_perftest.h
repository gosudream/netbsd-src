/* option `ISCSI_PERFTEST' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ISCSI_PERFTEST
 .global _KERNEL_OPT_ISCSI_PERFTEST
 .equiv _KERNEL_OPT_ISCSI_PERFTEST,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ISCSI_PERFTEST\n .global _KERNEL_OPT_ISCSI_PERFTEST\n .equiv _KERNEL_OPT_ISCSI_PERFTEST,0x6e074def\n .endif");
#endif
