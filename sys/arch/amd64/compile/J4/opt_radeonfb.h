/* option `RADEONFB_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RADEONFB_DEBUG
 .global _KERNEL_OPT_RADEONFB_DEBUG
 .equiv _KERNEL_OPT_RADEONFB_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RADEONFB_DEBUG\n .global _KERNEL_OPT_RADEONFB_DEBUG\n .equiv _KERNEL_OPT_RADEONFB_DEBUG,0x6e074def\n .endif");
#endif
/* option `RADEONFB_BIOS_INIT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RADEONFB_BIOS_INIT
 .global _KERNEL_OPT_RADEONFB_BIOS_INIT
 .equiv _KERNEL_OPT_RADEONFB_BIOS_INIT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RADEONFB_BIOS_INIT\n .global _KERNEL_OPT_RADEONFB_BIOS_INIT\n .equiv _KERNEL_OPT_RADEONFB_BIOS_INIT,0x6e074def\n .endif");
#endif
/* option `RADEONFB_BIOS_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RADEONFB_BIOS_DEBUG
 .global _KERNEL_OPT_RADEONFB_BIOS_DEBUG
 .equiv _KERNEL_OPT_RADEONFB_BIOS_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RADEONFB_BIOS_DEBUG\n .global _KERNEL_OPT_RADEONFB_BIOS_DEBUG\n .equiv _KERNEL_OPT_RADEONFB_BIOS_DEBUG,0x6e074def\n .endif");
#endif
/* option `RADEONFB_MMAP_BARS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RADEONFB_MMAP_BARS
 .global _KERNEL_OPT_RADEONFB_MMAP_BARS
 .equiv _KERNEL_OPT_RADEONFB_MMAP_BARS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RADEONFB_MMAP_BARS\n .global _KERNEL_OPT_RADEONFB_MMAP_BARS\n .equiv _KERNEL_OPT_RADEONFB_MMAP_BARS,0x6e074def\n .endif");
#endif
/* option `RADEONFB_DEPTH_32' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_RADEONFB_DEPTH_32
 .global _KERNEL_OPT_RADEONFB_DEPTH_32
 .equiv _KERNEL_OPT_RADEONFB_DEPTH_32,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_RADEONFB_DEPTH_32\n .global _KERNEL_OPT_RADEONFB_DEPTH_32\n .equiv _KERNEL_OPT_RADEONFB_DEPTH_32,0x6e074def\n .endif");
#endif
