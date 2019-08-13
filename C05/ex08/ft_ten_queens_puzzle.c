/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 18:47:25 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/11 13:06:54 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_chess(int *chess)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(chess[i] + '0');
		i++;
	}
	write(1, "\n", 1);
}

int		ft_can_place(int *chess, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (chess[i] == chess[j])
			return (0);
		if (chess[j] == chess[i] - (i - j) || chess[j] == chess[i] + (i - j))
			return (0);
		j++;
	}
	return (1);
}

void	ft_backtrack(int *chess, int col, int *res)
{
	int line;

	if (col == 10)
	{
		*res += 1;
		ft_print_chess(chess);
	}
	else
	{
		line = 0;
		while (line < 10)
		{
			chess[col] = line;
			if (ft_can_place(chess, col))
				ft_backtrack(chess, col + 1, res);
			line++;
		}
		chess[col] = 0;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int i;
	int chess[10];
	int res;

	i = 0;
	res = 0;
	while (i < 10)
		chess[i++] = 0;
	ft_backtrack(chess, 0, &res);
	return (res);
}
