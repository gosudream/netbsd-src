#define	NGUSPNP	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NGUSPNP
 .global _KERNEL_OPT_NGUSPNP
 .equiv _KERNEL_OPT_NGUSPNP,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NGUSPNP\n .global _KERNEL_OPT_NGUSPNP\n .equiv _KERNEL_OPT_NGUSPNP,0x0\n .endif");
#endif
