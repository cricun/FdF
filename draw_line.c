/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahugh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 17:33:40 by ahugh             #+#    #+#             */
/*   Updated: 2019/03/28 16:02:18 by ahugh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

int					draw_line_smoothing(t_img *img, t_px bgn, t_px end)
{
	if (bgn.x == end.x || bgn.y == end.y)
		draw_straight_line(img, &bgn, &end);
	else
		draw_slant_line(img, &bgn, &end);
	return (1);
}
