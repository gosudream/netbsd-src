# $NetBSD: Makefile,v 1.8.8.1 2012/05/17 19:03:23 riz Exp $

.include <bsd.own.mk>

TESTSDIR=	${TESTSBASE}/modules

# Ideally this test could be in the parent Makefile, which could not descend
# into this directory at all.  Unfortunately, the etc/mtree/NetBSD.dist file
# creates the 'modules' subdirectory unconditionally, which if left empty
# will confuse atf-run.  Therefore we must install, at the very least, the
# Atffile into it.
TESTS_C=	t_modctl
TESTS_C+=	t_builtin
LDADD=		-lprop
LDADD+=		-lrumpfs_kernfs -lrumpvfs -lrump -lrumpuser -lpthread

TESTS_SH=	t_abi_uvm
TESTS_SH+=	t_modload

SUBDIR=		k_helper
SUBDIR+=	k_helper2
SUBDIR+=	k_uvm

.include <bsd.test.mk>
