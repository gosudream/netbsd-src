/* option `STRTC_NO_WATCHDOG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_STRTC_NO_WATCHDOG
 .global _KERNEL_OPT_STRTC_NO_WATCHDOG
 .equiv _KERNEL_OPT_STRTC_NO_WATCHDOG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_STRTC_NO_WATCHDOG\n .global _KERNEL_OPT_STRTC_NO_WATCHDOG\n .equiv _KERNEL_OPT_STRTC_NO_WATCHDOG,0x6e074def\n .endif");
#endif
/* option `STRTC_NO_USERRAM' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_STRTC_NO_USERRAM
 .global _KERNEL_OPT_STRTC_NO_USERRAM
 .equiv _KERNEL_OPT_STRTC_NO_USERRAM,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_STRTC_NO_USERRAM\n .global _KERNEL_OPT_STRTC_NO_USERRAM\n .equiv _KERNEL_OPT_STRTC_NO_USERRAM,0x6e074def\n .endif");
#endif
