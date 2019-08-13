/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 21:11:45 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/03 17:44:44 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int *tab, int n)
{
	int i;

	i = n;
	while (i >= 0)
	{
		ft_putchar(tab[i] + '0');
		i--;
	}
	if (tab[n] != (9 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_increase_tab(int *tab, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		if (tab[i] > 9 - i)
		{
			tab[i + 1]++;
			tab[i] = tab[i + 1] + 1;
			j = i;
			while (j > 0)
			{
				tab[j - 1] = tab[j] + 1;
				j--;
			}
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	int tab[9];
	int i;

	if (!(n <= 0 || n > 9))
	{
		n--;
		i = 0;
		while (i <= n)
		{
			tab[i] = n - i;
			i++;
		}
		ft_print_tab(tab, n);
		while (tab[n] != (9 - n))
		{
			tab[0]++;
			ft_increase_tab(tab, n);
			ft_print_tab(tab, n);
		}
	}
}
