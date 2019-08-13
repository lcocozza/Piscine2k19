/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 05:14:36 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/24 16:15:52 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_print_list_int(t_list *list)
{
	int i;
	int *tab;

	tab = (int *)list->data;
	while(list)
	{
		i = 0;
		while (i < 50)
		{
			printf("%d", tab[i]);
			i++;
		}
		printf(" -> ");
		list = list->next;
	}
	printf("NULL\n");
}
