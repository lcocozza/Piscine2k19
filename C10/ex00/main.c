/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:40:35 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/14 14:34:56 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}
