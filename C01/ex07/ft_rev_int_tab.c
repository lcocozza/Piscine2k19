/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:00:17 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/03 19:51:19 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size)
	{
		size--;
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
	}
}
