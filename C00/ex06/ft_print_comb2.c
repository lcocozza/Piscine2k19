/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 15:35:46 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/03 13:32:40 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nb(int nb1, int nb2)
{
	ft_putchar(nb1 / 10 + '0');
	ft_putchar(nb1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(nb2 / 10 + '0');
	ft_putchar(nb2 % 10 + '0');
	if (nb1 < 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	nb2 = 1;
	while (nb1 <= 98)
	{
		ft_print_nb(nb1, nb2);
		nb2++;
		if (nb2 > 99)
		{
			nb1++;
			nb2 = nb1 + 1;
		}
	}
}
