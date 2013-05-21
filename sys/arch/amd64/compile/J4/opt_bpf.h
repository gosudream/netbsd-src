/* option `BPF_BUFSIZE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_BPF_BUFSIZE
 .global _KERNEL_OPT_BPF_BUFSIZE
 .equiv _KERNEL_OPT_BPF_BUFSIZE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_BPF_BUFSIZE\n .global _KERNEL_OPT_BPF_BUFSIZE\n .equiv _KERNEL_OPT_BPF_BUFSIZE,0x6e074def\n .endif");
#endif
