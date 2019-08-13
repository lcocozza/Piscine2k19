/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:55:36 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/08 00:49:48 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(int nb, int bl)
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

void	ft_print_hex(unsigned char *str, int offset)
{
	int i;
	int j;

	j = 0;
	i = offset;
	while (i < offset + 16)
	{
		if (str[i])
			ft_hex(str[i], 0);
		else
			write(1, "  ", 2);
		if (j == 1)
			write(1, " ", 1);
		j = (j == 1 ? 0 : j + 1);
		i++;
	}
}

void	ft_print_ascii(unsigned char *str, int offset)
{
	int i;

	i = offset;
	while (i < offset + 16 && str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	ft_print_addr(int nb)
{
	write(1, "000000", 6);
	ft_hex(nb, 0);
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)addr;
	while (i < (int)size)
	{
		ft_print_addr((int)&tmp[i]);
		ft_print_hex(tmp, i);
		ft_print_ascii(tmp, i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
