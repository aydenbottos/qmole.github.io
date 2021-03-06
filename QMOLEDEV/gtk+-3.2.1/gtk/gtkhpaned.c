/* GTK - The GIMP Toolkit
 * Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/*
 * Modified by the GTK+ Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GTK+ Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GTK+ at ftp://ftp.gtk.org/pub/gtk/.
 */

#include "config.h"

#undef GTK_DISABLE_DEPRECATED
#include "gtkhpaned.h"
#include "gtkorientable.h"


/**
 * SECTION:gtkhpaned
 * @Short_description: A container with two panes arranged horizontally
 * @Title: GtkHPaned
 *
 * The HPaned widget is a container widget with two
 * children arranged horizontally. The division between
 * the two panes is adjustable by the user by dragging
 * a handle. See #GtkPaned for details.
 *
 * GtkHPaned has been deprecated, use #GtkPaned instead.
 */


G_DEFINE_TYPE (GtkHPaned, gtk_hpaned, GTK_TYPE_PANED)

static void
gtk_hpaned_class_init (GtkHPanedClass *class)
{
}

static void
gtk_hpaned_init (GtkHPaned *hpaned)
{
  gtk_orientable_set_orientation (GTK_ORIENTABLE (hpaned),
                                  GTK_ORIENTATION_HORIZONTAL);
}

/**
 * gtk_hpaned_new:
 *
 * Create a new #GtkHPaned
 *
 * Returns: the new #GtkHPaned
 *
 * Deprecated: 3.2: Use gtk_paned_new() with %GTK_ORIENTATION_HORIZONTAL instead
 */
GtkWidget *
gtk_hpaned_new (void)
{
  return g_object_new (GTK_TYPE_HPANED, NULL);
}
