/*	$NetBSD: nametokva.c,v 1.2 2012/02/15 17:55:06 riz Exp $	*/

/*
 * Copyright (C) 2002 by Darren Reed.
 *
 * See the IPFILTER.LICENCE file for details on licencing.
 *
 * Id: nametokva.c,v 1.1.4.2 2009/12/27 06:58:06 darrenr Exp
 */

#include "ipf.h"

#include <sys/ioctl.h>
#include <fcntl.h>

ipfunc_t nametokva(name, iocfunc)
char *name;
ioctlfunc_t iocfunc;
{
	ipfunc_resolve_t res;
	int fd;

	strncpy(res.ipfu_name, name, sizeof(res.ipfu_name));
	res.ipfu_addr = NULL;
	fd = -1;

	if ((opts & OPT_DONOTHING) == 0) {
		fd = open(IPL_NAME, O_RDONLY);
		if (fd == -1)
			return NULL;
	}
	(void) (*iocfunc)(fd, SIOCFUNCL, &res);
	if (fd >= 0)
		close(fd);
	if (res.ipfu_addr == NULL)
		res.ipfu_addr = (ipfunc_t)-1;
	return res.ipfu_addr;
}
