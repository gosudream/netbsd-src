#define	MPBIOS_SCANPCI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MPBIOS_SCANPCI
 .global _KERNEL_OPT_MPBIOS_SCANPCI
 .equiv _KERNEL_OPT_MPBIOS_SCANPCI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MPBIOS_SCANPCI\n .global _KERNEL_OPT_MPBIOS_SCANPCI\n .equiv _KERNEL_OPT_MPBIOS_SCANPCI,0x1\n .endif");
#endif
/* option `MPDEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MPDEBUG
 .global _KERNEL_OPT_MPDEBUG
 .equiv _KERNEL_OPT_MPDEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MPDEBUG\n .global _KERNEL_OPT_MPDEBUG\n .equiv _KERNEL_OPT_MPDEBUG,0x6e074def\n .endif");
#endif
/* option `MPVERBOSE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MPVERBOSE
 .global _KERNEL_OPT_MPVERBOSE
 .equiv _KERNEL_OPT_MPVERBOSE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MPVERBOSE\n .global _KERNEL_OPT_MPVERBOSE\n .equiv _KERNEL_OPT_MPVERBOSE,0x6e074def\n .endif");
#endif
#define	MPBIOS	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MPBIOS
 .global _KERNEL_OPT_MPBIOS
 .equiv _KERNEL_OPT_MPBIOS,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MPBIOS\n .global _KERNEL_OPT_MPBIOS\n .equiv _KERNEL_OPT_MPBIOS,0x1\n .endif");
#endif
