#define	FILEASSOC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_FILEASSOC
 .global _KERNEL_OPT_FILEASSOC
 .equiv _KERNEL_OPT_FILEASSOC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_FILEASSOC\n .global _KERNEL_OPT_FILEASSOC\n .equiv _KERNEL_OPT_FILEASSOC,0x1\n .endif");
#endif
