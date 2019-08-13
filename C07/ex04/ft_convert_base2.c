/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:58:18 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/18 01:16:55 by lucocozz         ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str);
	while (i < j)
	{
		j--;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
	}
	return (str);
}

char	*ft_conv(int nbr, char *base_to, char *str, int neg)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(base_to);
	if (nbr == 0)
		str[i++] = base_to[0];
	while (nbr > 0)
	{
		str[i++] = base_to[nbr % size];
		nbr /= size;
	}
	str[i++] = (neg ? '-' : '\0');
	str[i] = '\0';
	return (ft_strrev(str));
}

char	*ft_convert_base2(int nbr, char *base_to)
{
	int		i;
	int		neg;
	char	*str;

	i = 0;
	neg = 0;
	if (nbr < 0)
	{
		neg = 1;
		nbr *= -1;
	}
	if ((str = malloc(sizeof(char) * 100)) == NULL)
		return (NULL);
	return (ft_conv(nbr, base_to, str, neg));
}
