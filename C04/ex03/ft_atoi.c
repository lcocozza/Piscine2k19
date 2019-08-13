/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 17:54:23 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/09 00:39:47 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c != ' ' && !(c >= '\t' && c <= '\r'))
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (neg % 2 == 0 ? res : -res);
}
