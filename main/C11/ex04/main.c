/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 01:36:25 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/18 06:49:21 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_sort_tab(int nb1, int nb2)
{
	if (nb1 < nb2)
		return (-1);
	if (nb1 > nb2)
		return (1);
	return (0);
}

int main()
{
	int tab[] = {3, 2, 1, 2, -1 , -2};

	printf("%d\n", ft_is_sort(tab, 6, &ft_sort_tab));
	return (0);
}
