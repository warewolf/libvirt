/*
 * Copyright (C) 2009 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *     Daniel P. Berrange <berrange@redhat.com>
 */

#ifndef __VIR_PROCESSINFO_H__
# define __VIR_PROCESSINFO_H__

# include "internal.h"
# include "bitmap.h"

int virProcessInfoSetAffinity(pid_t pid, virBitmapPtr map);

int virProcessInfoGetAffinity(pid_t pid,
                              virBitmapPtr *map,
                              int maxcpu);

#endif /* __VIR_PROCESSINFO_H__ */
