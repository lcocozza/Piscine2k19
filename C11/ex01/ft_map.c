/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:44:37 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/17 09:45:27 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *newtab;

	i = 0;
	if ((newtab = malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	while (i < length)
	{
		newtab[i] = (*f)(tab[i]);
		i++;
	}
	return (newtab);
}
