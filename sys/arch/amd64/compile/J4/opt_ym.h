/* option `YM_POWER_OFF_SEC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_YM_POWER_OFF_SEC
 .global _KERNEL_OPT_YM_POWER_OFF_SEC
 .equiv _KERNEL_OPT_YM_POWER_OFF_SEC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_YM_POWER_OFF_SEC\n .global _KERNEL_OPT_YM_POWER_OFF_SEC\n .equiv _KERNEL_OPT_YM_POWER_OFF_SEC,0x6e074def\n .endif");
#endif
/* option `YM_POWER_MODE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_YM_POWER_MODE
 .global _KERNEL_OPT_YM_POWER_MODE
 .equiv _KERNEL_OPT_YM_POWER_MODE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_YM_POWER_MODE\n .global _KERNEL_OPT_YM_POWER_MODE\n .equiv _KERNEL_OPT_YM_POWER_MODE,0x6e074def\n .endif");
#endif
