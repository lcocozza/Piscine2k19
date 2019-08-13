/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 23:40:15 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/16 22:52:14 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
	//printf("%s", ft_convert_base("  ++---+p", "pute", "bite"));
	return 0;
}
