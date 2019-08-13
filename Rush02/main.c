/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:32:03 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/21 12:43:05 by fllefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush_02.h"

int		main(int argc, char **argv)
{
	int arg;

	arg = ft_arguments(argc, argv);
	if (argc == 2)
		ft_count_unit(argv[1]);
	if (argc == 3)
		ft_count_unit(argv[2]);
	else
	{	
		ft_putstr("error\n");
		return (0);
	}
}
