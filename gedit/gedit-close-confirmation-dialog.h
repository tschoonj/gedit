/*
 * gedit-close-confirmation-dialog.h
 * This file is part of gedit
 *
 * Copyright (C) 2004-2005 GNOME Foundation
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GEDIT_CLOSE_CONFIRMATION_DIALOG_H__
#define __GEDIT_CLOSE_CONFIRMATION_DIALOG_H__

#include <glib.h>
#include <gtk/gtk.h>
#include <gedit/gedit-document.h>

#define GEDIT_TYPE_CLOSE_CONFIRMATION_DIALOG (gedit_close_confirmation_dialog_get_type ())

G_DECLARE_FINAL_TYPE (GeditCloseConfirmationDialog, gedit_close_confirmation_dialog, GEDIT, CLOSE_CONFIRMATION_DIALOG, GtkDialog)

GtkWidget	*gedit_close_confirmation_dialog_new			(GtkWindow     *parent,
									 GList         *unsaved_documents);
GtkWidget 	*gedit_close_confirmation_dialog_new_single 		(GtkWindow     *parent,
									 GeditDocument *doc);

const GList	*gedit_close_confirmation_dialog_get_unsaved_documents  (GeditCloseConfirmationDialog *dlg);

GList		*gedit_close_confirmation_dialog_get_selected_documents	(GeditCloseConfirmationDialog *dlg);

#endif /* __GEDIT_CLOSE_CONFIRMATION_DIALOG_H__ */
/* ex:set ts=8 noet: */
