/* option `KAME_IPSEC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_KAME_IPSEC
 .global _KERNEL_OPT_KAME_IPSEC
 .equiv _KERNEL_OPT_KAME_IPSEC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_KAME_IPSEC\n .global _KERNEL_OPT_KAME_IPSEC\n .equiv _KERNEL_OPT_KAME_IPSEC,0x6e074def\n .endif");
#endif
/* option `IPSEC_ESP' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPSEC_ESP
 .global _KERNEL_OPT_IPSEC_ESP
 .equiv _KERNEL_OPT_IPSEC_ESP,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPSEC_ESP\n .global _KERNEL_OPT_IPSEC_ESP\n .equiv _KERNEL_OPT_IPSEC_ESP,0x6e074def\n .endif");
#endif
/* option `IPSEC_NAT_T' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPSEC_NAT_T
 .global _KERNEL_OPT_IPSEC_NAT_T
 .equiv _KERNEL_OPT_IPSEC_NAT_T,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPSEC_NAT_T\n .global _KERNEL_OPT_IPSEC_NAT_T\n .equiv _KERNEL_OPT_IPSEC_NAT_T,0x6e074def\n .endif");
#endif
/* option `FAST_IPSEC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_FAST_IPSEC
 .global _KERNEL_OPT_FAST_IPSEC
 .equiv _KERNEL_OPT_FAST_IPSEC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_FAST_IPSEC\n .global _KERNEL_OPT_FAST_IPSEC\n .equiv _KERNEL_OPT_FAST_IPSEC,0x6e074def\n .endif");
#endif
/* option `IPSEC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPSEC
 .global _KERNEL_OPT_IPSEC
 .equiv _KERNEL_OPT_IPSEC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPSEC\n .global _KERNEL_OPT_IPSEC\n .equiv _KERNEL_OPT_IPSEC,0x6e074def\n .endif");
#endif
/* option `IPSEC_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPSEC_DEBUG
 .global _KERNEL_OPT_IPSEC_DEBUG
 .equiv _KERNEL_OPT_IPSEC_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPSEC_DEBUG\n .global _KERNEL_OPT_IPSEC_DEBUG\n .equiv _KERNEL_OPT_IPSEC_DEBUG,0x6e074def\n .endif");
#endif
