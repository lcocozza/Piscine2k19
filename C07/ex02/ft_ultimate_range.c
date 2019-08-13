/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:09:48 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/11 02:47:12 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tmp;
	int i;

	i = 0;
	tmp = NULL;
	if (min >= max)
	{
		*range = tmp;
		return (0);
	}
	if ((tmp = malloc(sizeof(int) * (max - min))) == NULL)
	{
		*range = tmp;
		return (-1);
	}
	while (i + min < max)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (max - min);
}
