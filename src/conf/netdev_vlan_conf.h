/*
 * Copyright (C) 2009-2012 Red Hat, Inc.
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
 *     Laine Stump <laine@redhat.com>
 */

#ifndef __VIR_NETDEV_VLAN_CONF_H__
# define __VIR_NETDEV_VLAN_CONF_H__

# include "internal.h"
# include "virnetdevvlan.h"
# include "buf.h"
# include "xml.h"

int virNetDevVlanParse(xmlNodePtr node, xmlXPathContextPtr ctxt, virNetDevVlanPtr def);
int virNetDevVlanFormat(virNetDevVlanPtr def, virBufferPtr buf);

#endif /* __VIR_NETDEV_VPORT_PROFILE_CONF_H__ */
