/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:35:51 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/17 09:48:17 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

static int	ft_get_index(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}

void		ft_pars(int tab[3], char **params)
{
	int op;

	if (ft_strlen(params[2]) > 1)
		op = 0;
	else
		op = ft_get_index(params[2][0], ".+-*/%");
	tab[0] = ft_atoi(params[1]);
	tab[1] = op;
	tab[2] = ft_atoi(params[3]);
}
