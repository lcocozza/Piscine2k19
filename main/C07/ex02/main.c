/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:01:37 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/10 18:50:59 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *tab = NULL;
	int i = 0;

	ft_ultimate_range(&tab, 10, 0);
	while (i < 10)
	{
		if (tab != NULL)
			printf("%d", tab[i]);
		else
			printf("ERROR!");
		i++;
	}
	return 0;
}
