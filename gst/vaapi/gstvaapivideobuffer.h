/*
 *  gstvaapivideobuffer.h - Gstreamer/VA video buffer
 *
 *  Copyright (C) 2010-2011 Splitted-Desktop Systems
 *  Copyright (C) 2011-2013 Intel Corporation
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation; either version 2.1
 *  of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301 USA
 */

#ifndef GST_VAAPI_VIDEO_BUFFER_H
#define GST_VAAPI_VIDEO_BUFFER_H

#include <gst/vaapi/gstvaapivideometa.h>

G_BEGIN_DECLS

typedef struct _GstVaapiVideoBuffer             GstVaapiVideoBuffer;

G_GNUC_INTERNAL
GstBuffer *
gst_vaapi_video_buffer_new(GstVaapiVideoMeta *meta);

G_GNUC_INTERNAL
GstVaapiVideoMeta *
gst_vaapi_video_buffer_get_meta(GstVaapiVideoBuffer *buffer);

G_END_DECLS

#endif /* GST_VAAPI_VIDEO_BUFFER_H */