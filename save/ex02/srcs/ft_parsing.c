/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:35:51 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/15 01:29:16 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_pars(int size, char **params)
{
	int num;

	if (ft_strcmp(params[1], "-c") == 0)
	{
		if (size < 3)
		{
			ft_putstr("ft_tail: option requires an argument -- c\n");
			ft_putstr("usage: ./ft_tail [-c #] [file ...]\n");
			return (-1);
		}
		num = ft_str_is_numeric(params[2]);
		if (num)
			return (ft_atoi(params[2]));
		else
		{
			ft_putstr("tail: illegal offset -- ");
			ft_putstr(params[2]);
			ft_putchar('\n');
			return (-1);
		}
	}
	return (0);
}
