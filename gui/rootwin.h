/**
 * @file
 * Root Window
 *
 * @authors
 * Copyright (C) 2021 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MUTT_WINDOW_ROOTWIN_H
#define MUTT_WINDOW_ROOTWIN_H

extern struct MuttWindow *RootWindow;

void mutt_window_free_all(void);
void mutt_window_init(void);
void mutt_window_set_root(int cols, int rows);

#endif /* MUTT_WINDOW_ROOTWIN_H */
