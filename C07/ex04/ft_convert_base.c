/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:58:23 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/17 10:56:06 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_convert_base2(int nbr, char *base_to);
int			ft_strlen(char *str);

int			ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i;
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' ||
		(base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		while (base[++j])
			if (base[i] == base[j])
				return (0);
		i++;
	}
	return (i < 2 ? 0 : 1);
}

int			ft_is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int			ft_get_val(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			i;
	int			neg;
	long int	res;

	i = 0;
	neg = 0;
	res = 0;
	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	while (nbr[i] == ' ' || (nbr[i] >= '\t' && nbr[i] <= '\r'))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
		if (nbr[i++] == '-')
			neg++;
	while (ft_is_in_base(nbr[i], base_from))
	{
		res = (res * ft_strlen(base_from)) + ft_get_val(base_from, nbr[i]);
		i++;
	}
	return (ft_convert_base2((neg % 2 == 0 ? res : -res), base_to));
}
