/* main.c
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
#include<stdio.h>
#include "config.h"
#include<glib-object.h>
#include <glib/gi18n.h>

#include "yuuko-application.h"

int
main (int   argc,
      char *argv[])
{
	g_autoptr(YuukoApplication) app = NULL;
	int ret;

	bindtextdomain (GETTEXT_PACKAGE, LOCALEDIR);
	bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
	textdomain (GETTEXT_PACKAGE);

	app = yuuko_application_new ("com.yuuko.alert", G_APPLICATION_DEFAULT_FLAGS);

        //g_signal_connect(app->bottom_button,"clicked",G_CALLBACK(button_pressed),NULL);
	ret = g_application_run (G_APPLICATION (app), argc, argv);

	return ret;
}
