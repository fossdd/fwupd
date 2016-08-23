/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2015-2016 Richard Hughes <richard@hughsie.com>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef __DFU_FORMAT_XTEA_H
#define __DFU_FORMAT_XTEA_H

#include <glib-object.h>
#include <gio/gio.h>

G_BEGIN_DECLS

gboolean		 dfu_cipher_encrypt_xtea	(const gchar	*key,
							 guint8		*data,
							 guint32	 length,
							 GError		**error);
gboolean		 dfu_cipher_decrypt_xtea	(const gchar	*key,
							 guint8		*data,
							 guint32	 length,
							 GError		**error);

G_END_DECLS

#endif /* __DFU_FORMAT_XTEA_H */
