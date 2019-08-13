/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:17:16 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/06 19:41:47 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nb(char *nb)
{
	write(1, nb, 3);
	if (nb[0] < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char nb[3];

	nb[0] = '0';
	nb[1] = '1';
	nb[2] = '2';
	while (nb[0] <= '7')
	{
		while (nb[2] <= '9')
		{
			ft_print_nb(nb);
			nb[2]++;
		}
		nb[1]++;
		if (nb[1] > '8')
		{
			nb[0]++;
			nb[1] = nb[0] + 1;
		}
		nb[2] = nb[1] + 1;
	}
}
