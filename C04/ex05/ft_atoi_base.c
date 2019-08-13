/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 18:39:36 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/09 10:56:23 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i;
		if (!(base[i] >= '0' && base[i] <= '9') &&
		!(base[i] >= 'a' && base[i] <= 'z') &&
		!(base[i] >= 'A' && base[i] <= 'Z'))
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
		if (base[i++] == c)
			return (1);
	}
	return (0);
}

long int	ft_base_conv(char *str, int base, int len)
{
	int			pow;
	long int	res;

	pow = 1;
	res = 0;
	while (len >= 0)
	{
		if (str[len] >= '0' && str[len] <= '9')
			res += (str[len] - '0') * pow;
		else if (str[len] >= 'A' && str[len] <= 'Z')
			res += (str[len] - 'A' + 10) * pow;
		else if (str[len] >= 'a' && str[len] <= 'z')
			res += (str[len] - 'a' + 10) * pow;
		pow = pow * base;
		len--;
	}
	return (res);
}

int			ft_atoi_base(char *str, char *base)
{
	int			i;
	int			j;
	int			neg;
	long int	res;

	i = 0;
	j = 0;
	neg = 0;
	res = 0;
	if (!ft_check_base(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (ft_is_in_base(str[i + j], base))
		j++;
	res = ft_base_conv(&str[i], ft_strlen(base), j - 1);
	return (neg % 2 == 0 ? res : -res);
}
