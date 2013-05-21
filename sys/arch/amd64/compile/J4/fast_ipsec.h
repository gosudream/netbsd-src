#define	NFAST_IPSEC	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NFAST_IPSEC
 .global _KERNEL_OPT_NFAST_IPSEC
 .equiv _KERNEL_OPT_NFAST_IPSEC,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NFAST_IPSEC\n .global _KERNEL_OPT_NFAST_IPSEC\n .equiv _KERNEL_OPT_NFAST_IPSEC,0x0\n .endif");
#endif
