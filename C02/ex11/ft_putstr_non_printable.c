/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:25:03 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/05 10:40:21 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(unsigned int nb, int bl)
{
	char *hex;

	hex = "0123456789abcdef";
	if (!bl && nb < 16)
		write(1, "0", 1);
	bl = 1;
	if (nb > 0)
	{
		ft_hex(nb / 16, bl);
		write(1, &hex[nb % 16], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)str;
	while (str[i])
	{
		if (!(tmp[i] >= 32 && tmp[i] <= 126))
		{
			ft_putchar('\\');
			ft_hex(tmp[i], 0);
		}
		else
			ft_putchar(tmp[i]);
		i++;
	}
}
