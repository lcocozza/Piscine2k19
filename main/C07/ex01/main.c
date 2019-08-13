/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:01:37 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/10 11:07:56 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int *tab;
	int i = 0;

	tab = ft_range(0, 10);
	while (i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}
