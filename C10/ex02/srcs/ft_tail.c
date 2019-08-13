/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:27:33 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/21 23:25:14 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static void		ft_putfile_name(char *name, int *bl)
{
	*bl = 1;
	ft_putstr("==> ");
	ft_putstr(name);
	ft_putstr(" <==\n");
}

static void		ft_putnofile_name(char *prog, char *name)
{
	ft_fd_putstr(basename(prog), STDERR_FILENO);
	ft_fd_putstr(": ", STDERR_FILENO);
	ft_fd_putstr(name, STDERR_FILENO);
	ft_fd_putstr(": ", STDERR_FILENO);
	ft_fd_putstr(strerror(errno), STDERR_FILENO);
	ft_fd_putstr("\n", 2);
}

void			ft_tail(int offset, char **files, int size)
{
	int i;
	int fd;
	int bl;

	i = 3;
	bl = 0;
	while (i < size)
	{
		fd = open(files[i], O_RDONLY);
		if (fd == -1)
			ft_putnofile_name(files[0], files[i]);
		else
		{
			if (size > 4)
			{
				if (bl)
					ft_putchar('\n');
				ft_putfile_name(files[i], &bl);
			}
			close(fd);
			ft_display(files[i], offset);
		}
		i++;
	}
}
