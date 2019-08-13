/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:50:09 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/16 19:12:16 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int));

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
	ft_print_nb(nb);
}

int	main()
{
	//int *ft;
	int tab[] = {1, 2, 3, 4, 5};

	//ft = &ft_putnbr;
	ft_foreach(tab, 5, &ft_putnbr);
	return 0;
}
