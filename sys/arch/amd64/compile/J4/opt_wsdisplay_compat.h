/* option `WSKBD_EVENT_AUTOREPEAT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSKBD_EVENT_AUTOREPEAT
 .global _KERNEL_OPT_WSKBD_EVENT_AUTOREPEAT
 .equiv _KERNEL_OPT_WSKBD_EVENT_AUTOREPEAT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSKBD_EVENT_AUTOREPEAT\n .global _KERNEL_OPT_WSKBD_EVENT_AUTOREPEAT\n .equiv _KERNEL_OPT_WSKBD_EVENT_AUTOREPEAT,0x6e074def\n .endif");
#endif
#define	WSDISPLAY_SCROLLSUPPORT	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSDISPLAY_SCROLLSUPPORT
 .global _KERNEL_OPT_WSDISPLAY_SCROLLSUPPORT
 .equiv _KERNEL_OPT_WSDISPLAY_SCROLLSUPPORT,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSDISPLAY_SCROLLSUPPORT\n .global _KERNEL_OPT_WSDISPLAY_SCROLLSUPPORT\n .equiv _KERNEL_OPT_WSDISPLAY_SCROLLSUPPORT,0x1\n .endif");
#endif
/* option `WSCONS_SUPPORT_ISO7FONTS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSCONS_SUPPORT_ISO7FONTS
 .global _KERNEL_OPT_WSCONS_SUPPORT_ISO7FONTS
 .equiv _KERNEL_OPT_WSCONS_SUPPORT_ISO7FONTS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSCONS_SUPPORT_ISO7FONTS\n .global _KERNEL_OPT_WSCONS_SUPPORT_ISO7FONTS\n .equiv _KERNEL_OPT_WSCONS_SUPPORT_ISO7FONTS,0x6e074def\n .endif");
#endif
/* option `WSCONS_SUPPORT_PCVTFONTS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSCONS_SUPPORT_PCVTFONTS
 .global _KERNEL_OPT_WSCONS_SUPPORT_PCVTFONTS
 .equiv _KERNEL_OPT_WSCONS_SUPPORT_PCVTFONTS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSCONS_SUPPORT_PCVTFONTS\n .global _KERNEL_OPT_WSCONS_SUPPORT_PCVTFONTS\n .equiv _KERNEL_OPT_WSCONS_SUPPORT_PCVTFONTS,0x6e074def\n .endif");
#endif
#define	WSDISPLAY_COMPAT_SYSCONS	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSDISPLAY_COMPAT_SYSCONS
 .global _KERNEL_OPT_WSDISPLAY_COMPAT_SYSCONS
 .equiv _KERNEL_OPT_WSDISPLAY_COMPAT_SYSCONS,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSDISPLAY_COMPAT_SYSCONS\n .global _KERNEL_OPT_WSDISPLAY_COMPAT_SYSCONS\n .equiv _KERNEL_OPT_WSDISPLAY_COMPAT_SYSCONS,0x1\n .endif");
#endif
#define	WSDISPLAY_COMPAT_PCVT	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSDISPLAY_COMPAT_PCVT
 .global _KERNEL_OPT_WSDISPLAY_COMPAT_PCVT
 .equiv _KERNEL_OPT_WSDISPLAY_COMPAT_PCVT,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSDISPLAY_COMPAT_PCVT\n .global _KERNEL_OPT_WSDISPLAY_COMPAT_PCVT\n .equiv _KERNEL_OPT_WSDISPLAY_COMPAT_PCVT,0x1\n .endif");
#endif
#define	WSDISPLAY_COMPAT_RAWKBD	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSDISPLAY_COMPAT_RAWKBD
 .global _KERNEL_OPT_WSDISPLAY_COMPAT_RAWKBD
 .equiv _KERNEL_OPT_WSDISPLAY_COMPAT_RAWKBD,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSDISPLAY_COMPAT_RAWKBD\n .global _KERNEL_OPT_WSDISPLAY_COMPAT_RAWKBD\n .equiv _KERNEL_OPT_WSDISPLAY_COMPAT_RAWKBD,0x1\n .endif");
#endif
#define	WSDISPLAY_COMPAT_USL	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSDISPLAY_COMPAT_USL
 .global _KERNEL_OPT_WSDISPLAY_COMPAT_USL
 .equiv _KERNEL_OPT_WSDISPLAY_COMPAT_USL,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSDISPLAY_COMPAT_USL\n .global _KERNEL_OPT_WSDISPLAY_COMPAT_USL\n .equiv _KERNEL_OPT_WSDISPLAY_COMPAT_USL,0x1\n .endif");
#endif
/* option `WSDISPLAY_DEFAULTSCREENS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSDISPLAY_DEFAULTSCREENS
 .global _KERNEL_OPT_WSDISPLAY_DEFAULTSCREENS
 .equiv _KERNEL_OPT_WSDISPLAY_DEFAULTSCREENS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSDISPLAY_DEFAULTSCREENS\n .global _KERNEL_OPT_WSDISPLAY_DEFAULTSCREENS\n .equiv _KERNEL_OPT_WSDISPLAY_DEFAULTSCREENS,0x6e074def\n .endif");
#endif
/* option `WSCOMPAT_USL_SYNCTIMEOUT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSCOMPAT_USL_SYNCTIMEOUT
 .global _KERNEL_OPT_WSCOMPAT_USL_SYNCTIMEOUT
 .equiv _KERNEL_OPT_WSCOMPAT_USL_SYNCTIMEOUT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSCOMPAT_USL_SYNCTIMEOUT\n .global _KERNEL_OPT_WSCOMPAT_USL_SYNCTIMEOUT\n .equiv _KERNEL_OPT_WSCOMPAT_USL_SYNCTIMEOUT,0x6e074def\n .endif");
#endif
#define	WSDISPLAY_SCROLLBACK_LINES	100
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_WSDISPLAY_SCROLLBACK_LINES
 .global _KERNEL_OPT_WSDISPLAY_SCROLLBACK_LINES
 .equiv _KERNEL_OPT_WSDISPLAY_SCROLLBACK_LINES,0x64
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_WSDISPLAY_SCROLLBACK_LINES\n .global _KERNEL_OPT_WSDISPLAY_SCROLLBACK_LINES\n .equiv _KERNEL_OPT_WSDISPLAY_SCROLLBACK_LINES,0x64\n .endif");
#endif
