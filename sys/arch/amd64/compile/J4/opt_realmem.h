/* option `REALEXTMEM' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_REALEXTMEM
 .global _KERNEL_OPT_REALEXTMEM
 .equiv _KERNEL_OPT_REALEXTMEM,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_REALEXTMEM\n .global _KERNEL_OPT_REALEXTMEM\n .equiv _KERNEL_OPT_REALEXTMEM,0x6e074def\n .endif");
#endif
/* option `REALBASEMEM' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_REALBASEMEM
 .global _KERNEL_OPT_REALBASEMEM
 .equiv _KERNEL_OPT_REALBASEMEM,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_REALBASEMEM\n .global _KERNEL_OPT_REALBASEMEM\n .equiv _KERNEL_OPT_REALBASEMEM,0x6e074def\n .endif");
#endif
