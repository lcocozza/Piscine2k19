/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:27:33 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/22 20:09:48 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_cat(char *prog, char *filename)
{
	int fd;

	if ((fd = open(filename, O_DIRECTORY)) != -1)
	{
		ft_print_is_directory(prog, filename);
		close(fd);
	}
	else
	{
		if ((fd = open(filename, O_RDONLY)) == -1)
			ft_print_not_found(prog, filename);
		else
		{
			ft_read_file(fd);
			close(fd);
		}
	}
}

void	ft_graphic_input(void)
{
	char c;

	while (read(STDIN_FILENO, &c, 1) != 0)
		write(STDOUT_FILENO, &c, 1);
}

void	ft_read_file(int fd)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (read(fd, &c, 1) != 0)
		ft_putstr(&c);
}

void	ft_print_is_directory(char *prog, char *filename)
{
	ft_fd_putstr(basename(prog), 2);
	ft_fd_putstr(": ", 2);
	ft_fd_putstr(filename, 2);
	ft_fd_putstr(": Is a directory\n", 2);
}

void	ft_print_not_found(char *prog, char *filename)
{
	ft_fd_putstr(basename(prog), 2);
	ft_fd_putstr(": ", 2);
	ft_fd_putstr(filename, 2);
	ft_fd_putstr(": ", 2);
	ft_fd_putstr(strerror(errno), 2);
	ft_fd_putstr("\n", 2);
}
