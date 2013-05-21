#define	NMIDI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NMIDI
 .global _KERNEL_OPT_NMIDI
 .equiv _KERNEL_OPT_NMIDI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NMIDI\n .global _KERNEL_OPT_NMIDI\n .equiv _KERNEL_OPT_NMIDI,0x1\n .endif");
#endif
#define	NMIDIBUS	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NMIDIBUS
 .global _KERNEL_OPT_NMIDIBUS
 .equiv _KERNEL_OPT_NMIDIBUS,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NMIDIBUS\n .global _KERNEL_OPT_NMIDIBUS\n .equiv _KERNEL_OPT_NMIDIBUS,0x1\n .endif");
#endif
