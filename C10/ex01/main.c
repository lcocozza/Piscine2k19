/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:40:35 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/21 09:15:47 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		ft_graphic_input();
	while (i < argc)
	{
		ft_cat(argv[0], argv[i]);
		i++;
	}
	return (0);
}
