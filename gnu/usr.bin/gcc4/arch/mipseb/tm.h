/* This file is automatically generated.  DO NOT EDIT! */
/* Generated from: 	NetBSD: mknative-gcc,v 1.22 2006/06/25 03:06:15 mrg Exp  */
/* Generated from: NetBSD: mknative.common,v 1.8 2006/05/26 19:17:21 mrg Exp  */

#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (((MASK_ABICALLS|MASK_SPLIT_ADDRESSES))|MASK_EXPLICIT_RELOCS)
#ifndef NETBSD_ENABLE_PTHREADS
# define NETBSD_ENABLE_PTHREADS
#endif
#ifdef IN_GCC
# include "options.h"
# include "config/elfos.h"
# include "config/mips/mips.h"
# include "config/mips/elf.h"
# include "config/netbsd.h"
# include "config/netbsd-elf.h"
# include "config/mips/netbsd.h"
# include "defaults.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-constants.h"
# include "insn-flags.h"
#endif
#endif /* GCC_TM_H */