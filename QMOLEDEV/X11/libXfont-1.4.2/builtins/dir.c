/*
 * Id: dir.c,v 1.2 1999/11/02 06:16:47 keithp Exp $
 *
 * Copyright 1999 SuSE, Inc.
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of SuSE not be used in advertising or
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.  SuSE makes no representations about the
 * suitability of this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * SuSE DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL SuSE
 * BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN 
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * Author:  Keith Packard, SuSE, Inc.
 */
/* $XFree86: xc/lib/font/builtins/dir.c,v 1.3 1999/12/30 02:29:49 robin Exp $ */

#include "builtin.h"

int
BuiltinReadDirectory (char *directory, FontDirectoryPtr *pdir)
{
    FontDirectoryPtr	dir;
    int			i;
    char		font_name[MAXFONTNAMELEN];
    char		file_name[MAXFONTNAMELEN];
    char		alias_name[MAXFONTNAMELEN];

    dir = FontFileMakeDir ("", builtin_dir_count);
    for (i = 0; i < builtin_dir_count; i++)
    {
	/* FontFileAddFontFile mangles its arguments */
	strcpy (font_name, builtin_dir[i].font_name);
	strcpy (file_name, builtin_dir[i].file_name);
	if (!FontFileAddFontFile (dir, font_name, file_name))
	{
	    FontFileFreeDir (dir);
	    return BadFontPath;
	}
    }
    for (i = 0; i < builtin_alias_count; i++)
    {
	/* FontFileAddFontAlias mangles its arguments */
	strcpy (alias_name, builtin_alias[i].alias_name);
	strcpy (font_name, builtin_alias[i].font_name);
	if (!FontFileAddFontAlias (dir, alias_name, font_name))
	{
	    FontFileFreeDir (dir);
	    return BadFontPath;
	}
    }
    FontFileSortDir (dir);
    *pdir = dir;
    return Successful;
}
