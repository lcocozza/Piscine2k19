/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:34:38 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/25 17:35:20 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *tmp;

	tmp = *begin_list;
	if (!begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		new = ft_create_elem(data);
		new->next = tmp;
		*begin_list = new;
	}
}

static void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*curr;
	t_list	*next;
	void	*tmp;

	curr = *begin_list;
	if (curr == NULL || curr->next == NULL)
		return ;
	while (curr->next)
	{
		next = curr->next;
		if ((*cmp)(curr->data, next->data) > 0)
		{
			tmp = curr->data;
			curr->data = next->data;
			next->data = tmp;
			curr = *begin_list;
		}
		else
			curr = curr->next;
	}
}

void		ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_front(begin_list, data);
	ft_list_sort(begin_list, (*cmp));
}
