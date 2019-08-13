/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 06:31:38 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/18 07:47:46 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;
	t_list	*new;

	tmp = *begin_list;
	if (!begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		new = ft_create_elem(data);
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
