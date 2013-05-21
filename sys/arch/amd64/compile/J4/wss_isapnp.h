#define	NWSS_ISAPNP	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NWSS_ISAPNP
 .global _KERNEL_OPT_NWSS_ISAPNP
 .equiv _KERNEL_OPT_NWSS_ISAPNP,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NWSS_ISAPNP\n .global _KERNEL_OPT_NWSS_ISAPNP\n .equiv _KERNEL_OPT_NWSS_ISAPNP,0x0\n .endif");
#endif
