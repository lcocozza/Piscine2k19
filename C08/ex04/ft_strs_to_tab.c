/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:41:47 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/14 00:34:30 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*strnew;

	i = 0;
	if ((strnew = malloc(sizeof(char) * ft_strlen(src) + 1)) == NULL)
		return (NULL);
	while (src[i])
	{
		strnew[i] = src[i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	if ((tab = malloc(sizeof(t_stock_str) * (ac + 1))) == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
