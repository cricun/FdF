/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_help.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djon-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 20:04:30 by djon-con          #+#    #+#             */
/*   Updated: 2019/04/14 16:03:52 by djon-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

#define TEXT_COLOR AQUA

static void inline	print_more(t_va *vault)
{
	mlx_string_put(vault->mlx, vault->win->win, 20, 190, TEXT_COLOR, \
			"PERSPECTIVE: P");
	mlx_string_put(vault->mlx, vault->win->win, 20, 210, TEXT_COLOR, \
			"PARALLEL:    O");
	mlx_string_put(vault->mlx, vault->win->win, 20, 230, TEXT_COLOR, \
			"ISOMETRIC:   I");
	mlx_string_put(vault->mlx, vault->win->win, 20, 260, TEXT_COLOR, \
			"BLUR MODE:   S");
	mlx_string_put(vault->mlx, vault->win->win, 20, 290, TEXT_COLOR, \
			"PERSPECTIVE CHANGE: +, -");
	mlx_string_put(vault->mlx, vault->win->win, 20, 320, TEXT_COLOR, \
			"COLORIZE BY Z-COORD: C");
	mlx_string_put(vault->mlx, vault->win->win, 20, 350, TEXT_COLOR, \
			"AUTO-REFRESH MODE:   A");
	mlx_string_put(vault->mlx, vault->win->win, 20, 380, TEXT_COLOR, \
			"RESET: 0");
}

void inline			print_help(t_va *vault)
{
	mlx_string_put(vault->mlx, vault->win->win, 90, 10, TEXT_COLOR, "KEYS:");
	mlx_string_put(vault->mlx, vault->win->win, 20, 40, TEXT_COLOR, \
			"MOUSE WHEEL: ZOOM");
	mlx_string_put(vault->mlx, vault->win->win, 20, 60, TEXT_COLOR, \
			"MOUSE LEFT KEY: MOVEMENT");
	mlx_string_put(vault->mlx, vault->win->win, 20, 80, TEXT_COLOR, \
			"X-AXIS ROTATION: Q, W");
	mlx_string_put(vault->mlx, vault->win->win, 20, 100, TEXT_COLOR, \
			"Y-AXIS ROTATION: E, R");
	mlx_string_put(vault->mlx, vault->win->win, 20, 120, TEXT_COLOR, \
			"Z-AXIS ROTATION: T, Y");
	mlx_string_put(vault->mlx, vault->win->win, 20, 140, TEXT_COLOR, \
			"Z-COORD SCALE: ARROWS UP, DOWN");
	mlx_string_put(vault->mlx, vault->win->win, 40, 170, TEXT_COLOR, \
			"CHANGE PROJECTION");
	print_more(vault);
}
