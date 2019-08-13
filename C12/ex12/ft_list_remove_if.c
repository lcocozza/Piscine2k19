/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 03:02:59 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/25 21:01:18 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list,
	void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *prev;
	t_list *tmp;

	tmp = *begin_list;
	while (tmp && (*cmp)(tmp->data, data_ref) == 0)
	{
		*begin_list = tmp->next;
		(*free_fct)(tmp->data);
		free(tmp);
		tmp = *begin_list;
	}
	while (tmp)
	{
		while (tmp && (*cmp)(tmp->data, data_ref))
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (!tmp)
			return ;
		prev->next = tmp->next;
		(*free_fct)(tmp->data);
		free(tmp);
		tmp = prev->next;
	}
}
