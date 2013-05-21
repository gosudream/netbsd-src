/* option `SDMMCCISDEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SDMMCCISDEBUG
 .global _KERNEL_OPT_SDMMCCISDEBUG
 .equiv _KERNEL_OPT_SDMMCCISDEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SDMMCCISDEBUG\n .global _KERNEL_OPT_SDMMCCISDEBUG\n .equiv _KERNEL_OPT_SDMMCCISDEBUG,0x6e074def\n .endif");
#endif
/* option `SDHC_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SDHC_DEBUG
 .global _KERNEL_OPT_SDHC_DEBUG
 .equiv _KERNEL_OPT_SDHC_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SDHC_DEBUG\n .global _KERNEL_OPT_SDHC_DEBUG\n .equiv _KERNEL_OPT_SDHC_DEBUG,0x6e074def\n .endif");
#endif
/* option `SDMMC_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SDMMC_DEBUG
 .global _KERNEL_OPT_SDMMC_DEBUG
 .equiv _KERNEL_OPT_SDMMC_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SDMMC_DEBUG\n .global _KERNEL_OPT_SDMMC_DEBUG\n .equiv _KERNEL_OPT_SDMMC_DEBUG,0x6e074def\n .endif");
#endif
