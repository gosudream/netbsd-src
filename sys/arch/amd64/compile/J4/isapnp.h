#define	NISAPNP	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NISAPNP
 .global _KERNEL_OPT_NISAPNP
 .equiv _KERNEL_OPT_NISAPNP,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NISAPNP\n .global _KERNEL_OPT_NISAPNP\n .equiv _KERNEL_OPT_NISAPNP,0x0\n .endif");
#endif
