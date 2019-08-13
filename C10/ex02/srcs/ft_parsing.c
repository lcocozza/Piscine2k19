/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:35:51 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/22 17:16:59 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static void	ft_input(int offset)
{
	int		i;
	int		j;
	int		k;
	char	buff[500000];

	i = 0;
	while ((i = read(0, buff, 500000)))
		k = i;
	j = NEG(k - offset);
	while (j < k)
	{
		write(1, &buff[j], 1);
		j++;
	}
}

int			ft_pars(int size, char **params)
{
	int num;

	if (size < 3)
	{
		ft_fd_putstr(basename(params[0]), 2);
		ft_fd_putstr(": option requires an argument -- c\n", 2);
		ft_fd_putstr("usage: ", 2);
		ft_fd_putstr(basename(params[0]), 2);
		ft_fd_putstr("[-c #] [file ...]\n", 2);
		return (-1);
	}
	if (size == 3 && ft_str_is_numeric(params[2]))
		ft_input(ft_atoi(params[2]));
	num = ft_str_is_numeric(params[2]);
	if (num)
		return (ft_atoi(params[2]));
	else
	{
		ft_fd_putstr(basename(params[0]), 2);
		ft_fd_putstr(": illegal offset -- ", 2);
		ft_fd_putstr(params[2], 2);
		ft_fd_putstr("\n", 2);
		return (-1);
	}
}
