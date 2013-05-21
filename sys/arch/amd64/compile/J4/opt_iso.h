/* option `TPIP' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_TPIP
 .global _KERNEL_OPT_TPIP
 .equiv _KERNEL_OPT_TPIP,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_TPIP\n .global _KERNEL_OPT_TPIP\n .equiv _KERNEL_OPT_TPIP,0x6e074def\n .endif");
#endif
/* option `ISO' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ISO
 .global _KERNEL_OPT_ISO
 .equiv _KERNEL_OPT_ISO,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ISO\n .global _KERNEL_OPT_ISO\n .equiv _KERNEL_OPT_ISO,0x6e074def\n .endif");
#endif
/* option `TPCONS' is obsolete */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_TPCONS
 .global _KERNEL_OPT_TPCONS
 .equiv _KERNEL_OPT_TPCONS,0xdeadbeef
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_TPCONS\n .global _KERNEL_OPT_TPCONS\n .equiv _KERNEL_OPT_TPCONS,0xdeadbeef\n .endif");
#endif
