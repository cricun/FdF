/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djon-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 21:52:05 by djon-con          #+#    #+#             */
/*   Updated: 2019/03/31 21:52:51 by djon-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}