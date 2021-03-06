/* option `DDB_COMMANDONENTER' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_DDB_COMMANDONENTER
 .global _KERNEL_OPT_DDB_COMMANDONENTER
 .equiv _KERNEL_OPT_DDB_COMMANDONENTER,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_DDB_COMMANDONENTER\n .global _KERNEL_OPT_DDB_COMMANDONENTER\n .equiv _KERNEL_OPT_DDB_COMMANDONENTER,0x6e074def\n .endif");
#endif
/* option `DDB_KEYCODE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_DDB_KEYCODE
 .global _KERNEL_OPT_DDB_KEYCODE
 .equiv _KERNEL_OPT_DDB_KEYCODE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_DDB_KEYCODE\n .global _KERNEL_OPT_DDB_KEYCODE\n .equiv _KERNEL_OPT_DDB_KEYCODE,0x6e074def\n .endif");
#endif
/* option `DDB_BREAK_CHAR' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_DDB_BREAK_CHAR
 .global _KERNEL_OPT_DDB_BREAK_CHAR
 .equiv _KERNEL_OPT_DDB_BREAK_CHAR,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_DDB_BREAK_CHAR\n .global _KERNEL_OPT_DDB_BREAK_CHAR\n .equiv _KERNEL_OPT_DDB_BREAK_CHAR,0x6e074def\n .endif");
#endif
#define	DDB_HISTORY_SIZE	512
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_DDB_HISTORY_SIZE
 .global _KERNEL_OPT_DDB_HISTORY_SIZE
 .equiv _KERNEL_OPT_DDB_HISTORY_SIZE,0x200
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_DDB_HISTORY_SIZE\n .global _KERNEL_OPT_DDB_HISTORY_SIZE\n .equiv _KERNEL_OPT_DDB_HISTORY_SIZE,0x200\n .endif");
#endif
/* option `DDB_ONPANIC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_DDB_ONPANIC
 .global _KERNEL_OPT_DDB_ONPANIC
 .equiv _KERNEL_OPT_DDB_ONPANIC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_DDB_ONPANIC\n .global _KERNEL_OPT_DDB_ONPANIC\n .equiv _KERNEL_OPT_DDB_ONPANIC,0x6e074def\n .endif");
#endif
/* option `DDB_FROMCONSOLE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_DDB_FROMCONSOLE
 .global _KERNEL_OPT_DDB_FROMCONSOLE
 .equiv _KERNEL_OPT_DDB_FROMCONSOLE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_DDB_FROMCONSOLE\n .global _KERNEL_OPT_DDB_FROMCONSOLE\n .equiv _KERNEL_OPT_DDB_FROMCONSOLE,0x6e074def\n .endif");
#endif
