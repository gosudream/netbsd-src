#define	NATA_DMA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATA_DMA
 .global _KERNEL_OPT_NATA_DMA
 .equiv _KERNEL_OPT_NATA_DMA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATA_DMA\n .global _KERNEL_OPT_NATA_DMA\n .equiv _KERNEL_OPT_NATA_DMA,0x1\n .endif");
#endif
#define	NATA_UDMA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATA_UDMA
 .global _KERNEL_OPT_NATA_UDMA
 .equiv _KERNEL_OPT_NATA_UDMA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATA_UDMA\n .global _KERNEL_OPT_NATA_UDMA\n .equiv _KERNEL_OPT_NATA_UDMA,0x1\n .endif");
#endif
#define	NATA_PIOBM	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATA_PIOBM
 .global _KERNEL_OPT_NATA_PIOBM
 .equiv _KERNEL_OPT_NATA_PIOBM,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATA_PIOBM\n .global _KERNEL_OPT_NATA_PIOBM\n .equiv _KERNEL_OPT_NATA_PIOBM,0x1\n .endif");
#endif
#define	NATABUS	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATABUS
 .global _KERNEL_OPT_NATABUS
 .equiv _KERNEL_OPT_NATABUS,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATABUS\n .global _KERNEL_OPT_NATABUS\n .equiv _KERNEL_OPT_NATABUS,0x1\n .endif");
#endif
#define	NATABUS	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATABUS
 .global _KERNEL_OPT_NATABUS
 .equiv _KERNEL_OPT_NATABUS,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATABUS\n .global _KERNEL_OPT_NATABUS\n .equiv _KERNEL_OPT_NATABUS,0x1\n .endif");
#endif
#define	NWDC_COMMON	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NWDC_COMMON
 .global _KERNEL_OPT_NWDC_COMMON
 .equiv _KERNEL_OPT_NWDC_COMMON,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NWDC_COMMON\n .global _KERNEL_OPT_NWDC_COMMON\n .equiv _KERNEL_OPT_NWDC_COMMON,0x1\n .endif");
#endif
