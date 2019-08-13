/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 05:14:36 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/18 05:14:39 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_print_list(t_list *list)
{
	while(list)
	{
		printf("%s", (char *)list->data);
		printf(" -> ");
		list = list->next;
	}
	printf("NULL\n");
}
