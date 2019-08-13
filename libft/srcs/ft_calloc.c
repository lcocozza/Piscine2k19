/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:34:36 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/14 12:34:48 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_calloc(int size)
{
	char	*mem;
	int		i;

	i = 0;
	if ((mem = malloc(size)) == NULL)
		return (NULL);
	while (i < size)
		mem[i++] = 0;
	return (mem);
}
