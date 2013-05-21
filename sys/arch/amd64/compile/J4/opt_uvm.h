/* option `UVMMAP_COUNTERS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_UVMMAP_COUNTERS
 .global _KERNEL_OPT_UVMMAP_COUNTERS
 .equiv _KERNEL_OPT_UVMMAP_COUNTERS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_UVMMAP_COUNTERS\n .global _KERNEL_OPT_UVMMAP_COUNTERS\n .equiv _KERNEL_OPT_UVMMAP_COUNTERS,0x6e074def\n .endif");
#endif
/* option `USE_TOPDOWN_VM' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_USE_TOPDOWN_VM
 .global _KERNEL_OPT_USE_TOPDOWN_VM
 .equiv _KERNEL_OPT_USE_TOPDOWN_VM,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_USE_TOPDOWN_VM\n .global _KERNEL_OPT_USE_TOPDOWN_VM\n .equiv _KERNEL_OPT_USE_TOPDOWN_VM,0x6e074def\n .endif");
#endif
