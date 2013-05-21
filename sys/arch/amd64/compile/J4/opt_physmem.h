/* option `PHYSMEM_MAX_SIZE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PHYSMEM_MAX_SIZE
 .global _KERNEL_OPT_PHYSMEM_MAX_SIZE
 .equiv _KERNEL_OPT_PHYSMEM_MAX_SIZE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PHYSMEM_MAX_SIZE\n .global _KERNEL_OPT_PHYSMEM_MAX_SIZE\n .equiv _KERNEL_OPT_PHYSMEM_MAX_SIZE,0x6e074def\n .endif");
#endif
/* option `PHYSMEM_MAX_ADDR' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PHYSMEM_MAX_ADDR
 .global _KERNEL_OPT_PHYSMEM_MAX_ADDR
 .equiv _KERNEL_OPT_PHYSMEM_MAX_ADDR,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PHYSMEM_MAX_ADDR\n .global _KERNEL_OPT_PHYSMEM_MAX_ADDR\n .equiv _KERNEL_OPT_PHYSMEM_MAX_ADDR,0x6e074def\n .endif");
#endif
