/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djon-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 17:41:27 by djon-con          #+#    #+#             */
/*   Updated: 2019/03/28 22:43:11 by djon-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

void	ft_exit(int i)
{
	if (i == 1)
		ft_putstr_fd("Wrong input file.\n", 2);
	else if (i != 42)
		perror(NULL);
	exit(0);
}