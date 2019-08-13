/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 13:58:29 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/12 13:58:15 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

char	*ft_join(char *strnew, char **strs, char *sep, int size)
{
	int i;
	int j;
	int bl;

	i = 0;
	j = 0;
	bl = 1;
	while (i < size)
	{
		ft_strcpy(&strnew[j], (bl ? strs[i] : sep));
		j += ft_strlen((bl ? strs[i] : sep));
		i += (bl ? 1 : 0);
		bl = (bl ? 0 : 1);
	}
	return (strnew);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*strnew;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	if ((strnew = ft_calloc(sizeof(char) * (size > 0 ? len : 0) + 1)) == NULL)
		return (NULL);
	if (size <= 0)
		return (strnew);
	return (ft_join(strnew, strs, sep, size));
}
