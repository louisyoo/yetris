/* yetris - Tetris(tm) on the console.
 * Copyright (C) 2013 Alexandre Dantas (kure)
 *
 * This file is part of yetris.
 *
 * yetris is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * homepage: http://www.github.com/alexdantas/yetris/
 * mailto:   alex.dantas92@gmail.com
 */

#include <stdlib.h>
#include "globals.h"

globals_s new_globals()
{
	globals_s g;

	g.screen_center_vertically   = false;
	g.screen_center_horizontally = false;
	g.screen_use_colors = true;
	g.screen_fancy_borders = true;
	g.screen_show_outer_border = true;

	g.game_has_ghost = true;
	g.game_can_hold = true;
	g.game_next_no = NEXT_PIECES_NO;
	g.game_has_statistics = true;
	g.game_random_algorithm = 1;

	int i;
	for (i = 0; i < 3; i++)
	{
		g.theme_piece[i] = '\0';
		g.theme_ghost[i] = '\0';
		g.theme_clear_line[i] = '\0';
	}
	g.theme_piece_has_colors = true;
	g.theme_ghost_has_colors = false;
	g.theme_show_pivot_block = false;
	g.theme_lock_piece_color = false;

	g.config_filename = NULL;

	return g;
}

