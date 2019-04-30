/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forever_loop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djon-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:44:26 by djon-con          #+#    #+#             */
/*   Updated: 2019/04/14 16:00:29 by djon-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

int		forever_loop(t_va *vault)
{
	if (vault->mods.autorefresh == 1)
		img_refresh(vault);
	return (1);
}