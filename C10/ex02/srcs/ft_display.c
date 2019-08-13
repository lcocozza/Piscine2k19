/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 11:56:10 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/22 17:20:40 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void		ft_display(char *filename, int offset)
{
	char	buff[500000];
	int		fd;
	int		i;
	int		j;
	int		k;

	i = 0;
	fd = open(filename, O_RDONLY);
	while ((i = read(fd, buff, 500000)))
		k = i;
	j = NEG(k - offset);
	while (j < k)
	{
		write(1, &buff[j], 1);
		j++;
	}
	close(fd);
}
