#define	NFSSERVER	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NFSSERVER
 .global _KERNEL_OPT_NFSSERVER
 .equiv _KERNEL_OPT_NFSSERVER,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NFSSERVER\n .global _KERNEL_OPT_NFSSERVER\n .equiv _KERNEL_OPT_NFSSERVER,0x1\n .endif");
#endif
