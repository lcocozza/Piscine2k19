/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 07:52:06 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/25 20:53:23 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *tmp;

	tmp = *begin_list;
	if (!tmp)
		*begin_list = ft_create_elem(data);
	else
	{
		new = ft_create_elem(data);
		new->next = tmp;
		*begin_list = new;
	}
}

t_list		*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*list;

	i = 0;
	list = 0;
	while (i < size)
	{
		ft_list_push_front(&list, strs[i]);
		i++;
	}
	return (list);
}
