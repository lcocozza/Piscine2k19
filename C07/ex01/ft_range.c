/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:57:55 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/10 11:29:31 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	if ((tab = malloc(sizeof(int) * (max - min))) == NULL)
		return (NULL);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
