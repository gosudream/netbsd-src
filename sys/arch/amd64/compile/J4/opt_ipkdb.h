/* option `IPKDB' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPKDB
 .global _KERNEL_OPT_IPKDB
 .equiv _KERNEL_OPT_IPKDB,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPKDB\n .global _KERNEL_OPT_IPKDB\n .equiv _KERNEL_OPT_IPKDB,0x6e074def\n .endif");
#endif
/* option `IPKDBSECURE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPKDBSECURE
 .global _KERNEL_OPT_IPKDBSECURE
 .equiv _KERNEL_OPT_IPKDBSECURE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPKDBSECURE\n .global _KERNEL_OPT_IPKDBSECURE\n .equiv _KERNEL_OPT_IPKDBSECURE,0x6e074def\n .endif");
#endif
/* option `IPKDBKEY' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPKDBKEY
 .global _KERNEL_OPT_IPKDBKEY
 .equiv _KERNEL_OPT_IPKDBKEY,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPKDBKEY\n .global _KERNEL_OPT_IPKDBKEY\n .equiv _KERNEL_OPT_IPKDBKEY,0x6e074def\n .endif");
#endif
/* option `IPKDB_DP8390' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPKDB_DP8390
 .global _KERNEL_OPT_IPKDB_DP8390
 .equiv _KERNEL_OPT_IPKDB_DP8390,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPKDB_DP8390\n .global _KERNEL_OPT_IPKDB_DP8390\n .equiv _KERNEL_OPT_IPKDB_DP8390,0x6e074def\n .endif");
#endif
/* option `IPKDB_NE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPKDB_NE
 .global _KERNEL_OPT_IPKDB_NE
 .equiv _KERNEL_OPT_IPKDB_NE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPKDB_NE\n .global _KERNEL_OPT_IPKDB_NE\n .equiv _KERNEL_OPT_IPKDB_NE,0x6e074def\n .endif");
#endif
/* option `IPKDB_NE_PCISLOT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPKDB_NE_PCISLOT
 .global _KERNEL_OPT_IPKDB_NE_PCISLOT
 .equiv _KERNEL_OPT_IPKDB_NE_PCISLOT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPKDB_NE_PCISLOT\n .global _KERNEL_OPT_IPKDB_NE_PCISLOT\n .equiv _KERNEL_OPT_IPKDB_NE_PCISLOT,0x6e074def\n .endif");
#endif
/* option `IPKDB_NE_PCI' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPKDB_NE_PCI
 .global _KERNEL_OPT_IPKDB_NE_PCI
 .equiv _KERNEL_OPT_IPKDB_NE_PCI,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPKDB_NE_PCI\n .global _KERNEL_OPT_IPKDB_NE_PCI\n .equiv _KERNEL_OPT_IPKDB_NE_PCI,0x6e074def\n .endif");
#endif
