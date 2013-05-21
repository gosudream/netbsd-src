#define	NVOYAGERFB	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NVOYAGERFB
 .global _KERNEL_OPT_NVOYAGERFB
 .equiv _KERNEL_OPT_NVOYAGERFB,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NVOYAGERFB\n .global _KERNEL_OPT_NVOYAGERFB\n .equiv _KERNEL_OPT_NVOYAGERFB,0x0\n .endif");
#endif
