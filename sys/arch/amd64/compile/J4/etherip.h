#define	NETHERIP	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NETHERIP
 .global _KERNEL_OPT_NETHERIP
 .equiv _KERNEL_OPT_NETHERIP,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NETHERIP\n .global _KERNEL_OPT_NETHERIP\n .equiv _KERNEL_OPT_NETHERIP,0x0\n .endif");
#endif
