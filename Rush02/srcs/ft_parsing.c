/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:42:41 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/21 20:40:51 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush_02.h"

static int	ft_filesize(char *dictname)
{
	int fd;
	char c;
	int size;

	size = 0;
	if ((fd = open(dictname, O_RDONLY)) == -1)
		return (-1);
	while (read(fd, &c, 1))
		size++;
	close(fd);
	return (size);
}

void	ft_set_list(t_words *list, char *str)
{
	int i;
	int nb;
	char *tab;
	char *split;

	i = 0;
	tab = ft_split(str, "\n");
	while (tab[i])
	{
		nb = ft_atoi(tab[i]);
		split = ft_split(tab[i], ": ");
		if (ft_strcmp(split[0], "0:") == 0)
			list->except[0] = split[1];
		else if (nb == 100)
			list->except[1] = split[1];
		else if (nb >= 1 && nb <= 9)
			list->unit[nb - 1] = split[1];
		else if (nb >= 10 && nb <= 19)
			list->case[(nb % 10) - 1] = split[1];
		else if (nb >= 20 && nb <= 90)
			list->decode[(nb / 10) - 1] = split[1];
		else if (nb == 1000)
			list->large[0] = split[1];
		else if (nb == 1000000)
			list->large[1] = split[1];
		else if (ft_strcmp(split[0], "1000000000:") == 0)
			list->large[2] = split[1];
		i++;
	}
}

int			ft_pars_dict(char *dictname, t_words *list)
{
	int i;
	int fd;
	int size;
	char *str;

	i = 0;
	if ((fd = open(dictname, O_RDONLY)) == -1)
		return (-1);
	close(fd);
	if ((size = ft_filesize(dictname)) == -1)
		return (-1);
	if ((str = malloc(sizeof(char) * (size + 1))) == NULL)
		return (-1);
	if ((fd = open(dictname, O_RDONLY)) == -1)
		return (-1);
	while (read(fd, &str[i], 1))
		i++;
	ft_set_list(list, str);
	return (0);
}
