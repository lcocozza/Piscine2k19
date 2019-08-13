/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arguments.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllefebv <fllefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 18:06:43 by fllefebv          #+#    #+#             */
/*   Updated: 2019/07/21 06:53:30 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush_02.h"

static int	ft_putgiveup(void)
{
	ft_putstr("(╯°□°）╯︵ ┻━┻\n");
	return (-1);
}

int		ft_arguments(int argc, char **argv)
{
	if (argc < 4 && argc > 1)
	{
		if (argc == 2 && ft_str_is_numeric(argv[1]) == 1)
		{
			if (ft_strlen(argv[1]) > 10)
				return (ft_putgiveup());
			if (ft_strlen(argv[1]) == 1 && argv[1][0] == '0')
				return (0);
			return(1);
		}
		if ((argc == 3) && ft_str_is_numeric(argv[2] == 1))
		{
			if (ft_strlen(argv[2]) > 10)
				return (ft_putgiveup());
			if (ft_strlen(argv[2]) == 1 && argv[2][0] == '0')
				return (0);
			return(2);
		}
	}
	return (-1);
}
