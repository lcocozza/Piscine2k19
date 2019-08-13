/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:27:09 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/13 20:05:26 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str, int size)
{
	write(1, str, size);
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str, par[i].size);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy, par[i].size);
		ft_putchar('\n');
		i++;
	}
}
