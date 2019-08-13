/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 12:18:25 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/25 17:33:31 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
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
