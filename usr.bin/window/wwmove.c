/*	$NetBSD: wwmove.c,v 1.7 2003/08/07 11:17:42 agc Exp $	*/

/*
 * Copyright (c) 1983, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Edward Wang at The University of California, Berkeley.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <sys/cdefs.h>
#ifndef lint
#if 0
static char sccsid[] = "@(#)wwmove.c	8.1 (Berkeley) 6/6/93";
#else
__RCSID("$NetBSD: wwmove.c,v 1.7 2003/08/07 11:17:42 agc Exp $");
#endif
#endif /* not lint */

#include "ww.h"

/*
 * Move a window.  Should be unattached.
 */
void
wwmove(struct ww *w, int row, int col)
{
	int dr, dc;
	int i;

	dr = row - w->ww_w.t;
	dc = col - w->ww_w.l;

	w->ww_w.t += dr;
	w->ww_w.b += dr;
	w->ww_w.l += dc;
	w->ww_w.r += dc;

	w->ww_b.t += dr;
	w->ww_b.b += dr;
	w->ww_b.l += dc;
	w->ww_b.r += dc;

	w->ww_i.t = MAX(w->ww_w.t, 0);
	w->ww_i.b = MIN(w->ww_w.b, wwnrow);
	w->ww_i.nr = w->ww_i.b - w->ww_i.t;
	w->ww_i.l = MAX(w->ww_w.l, 0);
	w->ww_i.r = MIN(w->ww_w.r, wwncol);
	w->ww_i.nc = w->ww_i.r - w->ww_i.l;

	w->ww_cur.r += dr;
	w->ww_cur.c += dc;

	w->ww_win -= dr;
	for (i = w->ww_w.t; i < w->ww_w.b; i++)
		w->ww_win[i] -= dc;
	if (w->ww_fmap != 0) {
		w->ww_fmap -= dr;
		for (i = w->ww_w.t; i < w->ww_w.b; i++)
			w->ww_fmap[i] -= dc;
	}
	w->ww_nvis -= dr;
	for (i = w->ww_i.t; i < w->ww_i.b; i++) {
		int j = w->ww_i.l;
		char *win = &w->ww_win[i][j];
		unsigned char *smap = &wwsmap[i][j];
		int nvis = 0;

		for (; j < w->ww_i.r; j++, win++, smap++)
			if (*win == 0 && *smap == w->ww_index)
				nvis++;
		w->ww_nvis[i] = nvis;
	}
	w->ww_buf -= dr;
	for (i = w->ww_b.t; i < w->ww_b.b; i++)
		w->ww_buf[i] -= dc;
}
