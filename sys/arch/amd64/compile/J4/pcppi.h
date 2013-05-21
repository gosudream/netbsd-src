#define	NPCPPI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPCPPI
 .global _KERNEL_OPT_NPCPPI
 .equiv _KERNEL_OPT_NPCPPI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPCPPI\n .global _KERNEL_OPT_NPCPPI\n .equiv _KERNEL_OPT_NPCPPI,0x1\n .endif");
#endif
