/* yuuko-window.c
 *
 * Copyright 2024 tan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "config.h"

#include "yuuko-window.h"

struct _YuukoWindow
{
	AdwApplicationWindow  parent_instance;

	/* Template widgets */
	AdwHeaderBar        *header_bar;
	GtkLabel            *label;
        GtkGrid             *grid;
        GtkImage            *img;
        GtkButton           *bottom_button;
};

G_DEFINE_FINAL_TYPE (YuukoWindow, yuuko_window, ADW_TYPE_APPLICATION_WINDOW)

static void
yuuko_window_class_init (YuukoWindowClass *klass)
{
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

	gtk_widget_class_set_template_from_resource (widget_class, "/com/yuuko/alert/yuuko-window.ui");
	gtk_widget_class_bind_template_child (widget_class, YuukoWindow, header_bar);
	gtk_widget_class_bind_template_child (widget_class, YuukoWindow, grid);
	gtk_widget_class_bind_template_child (widget_class, YuukoWindow, label);
	gtk_widget_class_bind_template_child (widget_class, YuukoWindow, img);
  	gtk_widget_class_bind_template_child (widget_class, YuukoWindow, bottom_button);
}

static void
yuuko_window_init (YuukoWindow *self)
{
	gtk_widget_init_template (GTK_WIDGET (self));
        /*g_signal_connect (self->bottom_button ,
                          "clicked",
                          G_CALLBACK (button_pressed),
                          self);*/
        g_signal_connect_swapped (self->bottom_button,
                                  "clicked",
                                  G_CALLBACK (gtk_window_destroy),
                                  GTK_WIDGET (self));
}

