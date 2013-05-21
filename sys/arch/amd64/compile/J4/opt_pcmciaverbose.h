/* option `PCMCIAVERBOSE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PCMCIAVERBOSE
 .global _KERNEL_OPT_PCMCIAVERBOSE
 .equiv _KERNEL_OPT_PCMCIAVERBOSE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PCMCIAVERBOSE\n .global _KERNEL_OPT_PCMCIAVERBOSE\n .equiv _KERNEL_OPT_PCMCIAVERBOSE,0x6e074def\n .endif");
#endif
