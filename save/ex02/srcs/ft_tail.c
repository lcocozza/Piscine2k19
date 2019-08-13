/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:27:33 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/15 13:46:50 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_putfile_name(char *name)
{
	ft_putstr("==> ");
	ft_putstr(name);
	ft_putstr(" <==\n");
}

void 	ft_putnofile_name(char *name)
{
	ft_putstr("tail: ");
	ft_putstr(name);
	ft_putstr(": No such file or directory\n");
}

void	ft_tail(char **files, int size)
{
	int i;
	int fd;
	int multi;

	i = 1;
	(void)offset;
	multi = (size > 2 ? 1 : 0);
	while (i < size)
	{
		fd = open(files[i], O_RDONLY);
		if (fd == -1)
			ft_putnofile_name(files[i]);
		else
		{
			if (i > 1)
				ft_putchar('\n');
			ft_putfile_name(files[i]);
		}
		//ft_display_line(fd);
		close(fd);
		i++;
	}
}

void	ft_tail_c(int offset, char **files, int size)
{
	int i;
	int fd;
	int multi;

	i = 3;
	(void)offset;
	multi = (size > 4 ? 1 : 0);
	while (i < size)
	{
		fd = open(files[i], O_RDONLY);
		if (fd == -1)
			ft_putnofile_name(files[i]);
		else
		{
			if (i > 3)
				ft_putchar('\n');
			ft_putfile_name(files[i]);
		}
		//ft_display_char(fd);
		close(fd);
		i++;
	}
}
