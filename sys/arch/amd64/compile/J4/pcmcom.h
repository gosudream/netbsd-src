#define	NPCMCOM	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPCMCOM
 .global _KERNEL_OPT_NPCMCOM
 .equiv _KERNEL_OPT_NPCMCOM,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPCMCOM\n .global _KERNEL_OPT_NPCMCOM\n .equiv _KERNEL_OPT_NPCMCOM,0x1\n .endif");
#endif
#define	NCOM_PCMCOM	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCOM_PCMCOM
 .global _KERNEL_OPT_NCOM_PCMCOM
 .equiv _KERNEL_OPT_NCOM_PCMCOM,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCOM_PCMCOM\n .global _KERNEL_OPT_NCOM_PCMCOM\n .equiv _KERNEL_OPT_NCOM_PCMCOM,0x1\n .endif");
#endif
