#define	COMPAT_NETBSD	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_NETBSD
 .global _KERNEL_OPT_COMPAT_NETBSD
 .equiv _KERNEL_OPT_COMPAT_NETBSD,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_NETBSD\n .global _KERNEL_OPT_COMPAT_NETBSD\n .equiv _KERNEL_OPT_COMPAT_NETBSD,0x1\n .endif");
#endif
#define	COMPAT_50	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_50
 .global _KERNEL_OPT_COMPAT_50
 .equiv _KERNEL_OPT_COMPAT_50,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_50\n .global _KERNEL_OPT_COMPAT_50\n .equiv _KERNEL_OPT_COMPAT_50,0x1\n .endif");
#endif
#define	COMPAT_40	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_40
 .global _KERNEL_OPT_COMPAT_40
 .equiv _KERNEL_OPT_COMPAT_40,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_40\n .global _KERNEL_OPT_COMPAT_40\n .equiv _KERNEL_OPT_COMPAT_40,0x1\n .endif");
#endif
#define	COMPAT_30	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_30
 .global _KERNEL_OPT_COMPAT_30
 .equiv _KERNEL_OPT_COMPAT_30,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_30\n .global _KERNEL_OPT_COMPAT_30\n .equiv _KERNEL_OPT_COMPAT_30,0x1\n .endif");
#endif
#define	COMPAT_20	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_20
 .global _KERNEL_OPT_COMPAT_20
 .equiv _KERNEL_OPT_COMPAT_20,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_20\n .global _KERNEL_OPT_COMPAT_20\n .equiv _KERNEL_OPT_COMPAT_20,0x1\n .endif");
#endif
#define	COMPAT_16	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_16
 .global _KERNEL_OPT_COMPAT_16
 .equiv _KERNEL_OPT_COMPAT_16,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_16\n .global _KERNEL_OPT_COMPAT_16\n .equiv _KERNEL_OPT_COMPAT_16,0x1\n .endif");
#endif
#define	COMPAT_15	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_15
 .global _KERNEL_OPT_COMPAT_15
 .equiv _KERNEL_OPT_COMPAT_15,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_15\n .global _KERNEL_OPT_COMPAT_15\n .equiv _KERNEL_OPT_COMPAT_15,0x1\n .endif");
#endif
/* option `COMPAT_14' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_14
 .global _KERNEL_OPT_COMPAT_14
 .equiv _KERNEL_OPT_COMPAT_14,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_14\n .global _KERNEL_OPT_COMPAT_14\n .equiv _KERNEL_OPT_COMPAT_14,0x6e074def\n .endif");
#endif
/* option `COMPAT_13' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_13
 .global _KERNEL_OPT_COMPAT_13
 .equiv _KERNEL_OPT_COMPAT_13,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_13\n .global _KERNEL_OPT_COMPAT_13\n .equiv _KERNEL_OPT_COMPAT_13,0x6e074def\n .endif");
#endif
/* option `COMPAT_12' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_12
 .global _KERNEL_OPT_COMPAT_12
 .equiv _KERNEL_OPT_COMPAT_12,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_12\n .global _KERNEL_OPT_COMPAT_12\n .equiv _KERNEL_OPT_COMPAT_12,0x6e074def\n .endif");
#endif
/* option `COMPAT_11' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_11
 .global _KERNEL_OPT_COMPAT_11
 .equiv _KERNEL_OPT_COMPAT_11,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_11\n .global _KERNEL_OPT_COMPAT_11\n .equiv _KERNEL_OPT_COMPAT_11,0x6e074def\n .endif");
#endif
/* option `COMPAT_10' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_10
 .global _KERNEL_OPT_COMPAT_10
 .equiv _KERNEL_OPT_COMPAT_10,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_10\n .global _KERNEL_OPT_COMPAT_10\n .equiv _KERNEL_OPT_COMPAT_10,0x6e074def\n .endif");
#endif
/* option `COMPAT_09' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_09
 .global _KERNEL_OPT_COMPAT_09
 .equiv _KERNEL_OPT_COMPAT_09,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_09\n .global _KERNEL_OPT_COMPAT_09\n .equiv _KERNEL_OPT_COMPAT_09,0x6e074def\n .endif");
#endif
/* option `COMPAT_NOMID' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_COMPAT_NOMID
 .global _KERNEL_OPT_COMPAT_NOMID
 .equiv _KERNEL_OPT_COMPAT_NOMID,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_COMPAT_NOMID\n .global _KERNEL_OPT_COMPAT_NOMID\n .equiv _KERNEL_OPT_COMPAT_NOMID,0x6e074def\n .endif");
#endif
