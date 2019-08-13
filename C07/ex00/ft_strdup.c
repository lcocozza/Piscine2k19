/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 23:25:06 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/14 00:06:57 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*strnew;

	i = 0;
	if ((strnew = malloc(sizeof(char) * ft_strlen(src) + 1)) == NULL)
		return (NULL);
	while (src[i])
	{
		strnew[i] = src[i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
