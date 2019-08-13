/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 17:50:56 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/06 17:50:59 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nb(int nb)
{
	if (nb > 0)
	{
		ft_print_nb(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	ft_print_nb(nb);
}
