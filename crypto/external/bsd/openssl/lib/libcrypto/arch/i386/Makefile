#	$NetBSD: Makefile,v 1.3.4.1 2012/08/14 07:57:04 riz Exp $

.include "bsd.own.mk"

CRYPTODIST=${NETBSDSRCDIR}/crypto
.include "${NETBSDSRCDIR}/crypto/Makefile.openssl"

regen:
	for i in $$(find ${OPENSSLSRC} -name \*86.pl) \
		  ${OPENSSLSRC}/crypto/x86cpuid.pl; do \
		perl -I${OPENSSLSRC}/crypto/perlasm \
		-I${OPENSSLSRC}/crypto/bn/asm $$i elf -fPIC \
		| sed -e 's,^\.file.*$$,#include <machine/asm.h>,' \
			-e 's/	call	OPENSSL_cpuid_setup/	PIC_PROLOGUE!	call	PIC_PLT(OPENSSL_cpuid_setup)!	PIC_EPILOGUE/' | tr '!' '\n' \
		> $$(basename $$i .pl).S; \
	done
