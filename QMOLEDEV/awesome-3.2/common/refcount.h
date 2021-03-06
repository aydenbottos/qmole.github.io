/*
 * refcount.h - useful reference counter handling header
 *
 * Copyright © 2008 Julien Danjou <julien@danjou.info>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */
#ifndef AWESOME_COMMON_REFCOUNT_H
#define AWESOME_COMMON_REFCOUNT_H

#define DO_RCNT(type, prefix, dtor)                                            \
    static inline void prefix##_unref(type **item)                             \
    {                                                                          \
        if(*item && --(*item)->refcount <= 0)                                  \
            dtor(item);                                                        \
    }                                                                          \
                                                                               \
    static inline type *prefix##_ref(type **item)                              \
    {                                                                          \
        (*item)->refcount++;                                                   \
        return *item;                                                          \
    }

#endif
// vim: filetype=c:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:encoding=utf-8:textwidth=80
