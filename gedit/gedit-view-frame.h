/*
 * gedit-view-frame.h
 * This file is part of gedit
 *
 * Copyright (C) 2010 - Ignacio Casal Quinteiro
 *
 * gedit is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * gedit is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with gedit. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GEDIT_VIEW_FRAME_H__
#define __GEDIT_VIEW_FRAME_H__

#include <gtk/gtk.h>
#include "gedit-document.h"
#include "gedit-view.h"

G_BEGIN_DECLS

#define GEDIT_TYPE_VIEW_FRAME (gedit_view_frame_get_type ())
G_DECLARE_FINAL_TYPE (GeditViewFrame, gedit_view_frame, GEDIT, VIEW_FRAME, GtkOverlay)

GeditViewFrame	*gedit_view_frame_new		(void);

GeditDocument	*gedit_view_frame_get_document	(GeditViewFrame *frame);

GeditView	*gedit_view_frame_get_view	(GeditViewFrame *frame);

void		 gedit_view_frame_popup_search	(GeditViewFrame *frame);

void		 gedit_view_frame_popup_goto_line (GeditViewFrame *frame);

void		 gedit_view_frame_clear_search	(GeditViewFrame *frame);

G_END_DECLS

#endif /* __GEDIT_VIEW_FRAME_H__ */
