/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:11:20 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/16 20:20:39 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int *ft_map(int *tab, int length, int(*f)(int));

int	ft_plus(int nb)
{
	return (nb + 1);
}

int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int *new;
	int i = 0;

	new = ft_map(tab, 5, &ft_plus);
	while (i < 5)
		printf("%d", new[i++]);

	return (0);
}
