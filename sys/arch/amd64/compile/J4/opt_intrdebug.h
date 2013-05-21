/* option `INTRDEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_INTRDEBUG
 .global _KERNEL_OPT_INTRDEBUG
 .equiv _KERNEL_OPT_INTRDEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_INTRDEBUG\n .global _KERNEL_OPT_INTRDEBUG\n .equiv _KERNEL_OPT_INTRDEBUG,0x6e074def\n .endif");
#endif
