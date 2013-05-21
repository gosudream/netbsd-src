#define	NPCWEASEL	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPCWEASEL
 .global _KERNEL_OPT_NPCWEASEL
 .equiv _KERNEL_OPT_NPCWEASEL,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPCWEASEL\n .global _KERNEL_OPT_NPCWEASEL\n .equiv _KERNEL_OPT_NPCWEASEL,0x0\n .endif");
#endif
