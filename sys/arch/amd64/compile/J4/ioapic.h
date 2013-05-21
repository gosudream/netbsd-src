#define	NIOAPIC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NIOAPIC
 .global _KERNEL_OPT_NIOAPIC
 .equiv _KERNEL_OPT_NIOAPIC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NIOAPIC\n .global _KERNEL_OPT_NIOAPIC\n .equiv _KERNEL_OPT_NIOAPIC,0x1\n .endif");
#endif
