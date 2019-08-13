/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrunel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:32:19 by mbrunel           #+#    #+#             */
/*   Updated: 2019/07/06 15:17:23 by mbrunel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	suite(int x, int y, int cpx, int cpy)
{
	while (cpy > 2)
	{
		if (x > 1)
			write(1, "B", 1);
		cpx = x;
		while (cpx > 2)
		{
			write(1, " ", 1);
			cpx--;
		}
		write(1, "B\n", 2);
		cpy--;
	}
	if (y > 1 && x > 0)
		write(1, "A", 1);
	cpx = x;
	while (cpx > 2 && y > 1)
	{
		write(1, "B", 1);
		cpx--;
	}
	if (y > 1 && x > 1)
		write(1, "C", 1);
}

void	rush(int x, int y)
{
	int cpx;
	int cpy;

	if (x > 0 && y > 0)
	{
		cpx = x;
		cpy = y;
		write(1, "A", 1);
		while (cpx > 2)
		{
			write(1, "B", 1);
			cpx--;
		}
		if (x > 1)
			write(1, "C", 1);
		write(1, "\n", 1);
		suite(x, y, cpx, cpy);
		if (y > 1)
			write(1, "\n", 1);
	}
}
