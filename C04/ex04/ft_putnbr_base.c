/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 17:50:56 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/09 10:40:45 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_is_alnum(char c)
{
	if ((c >= '0' && c <= '9') ||
	(c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void	ft_print_nb(long int nb, char *base, int size)
{
	if (nb >= size)
		ft_print_nb(nb / size, base, size);
	write(1, &base[nb % size], 1);
}

int		ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i;
		if (!ft_is_alnum(base[i]))
			return (0);
		while (base[++j])
			if (base[i] == base[j])
				return (0);
		i++;
	}
	return (i < 2 ? 0 : 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	nb = (long int)nbr;
	if (ft_check_base(base))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		ft_print_nb(nb, base, ft_strlen(base));
	}
}
