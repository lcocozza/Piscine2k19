/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 02:40:03 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/18 10:19:00 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	main(int argc, char **argv)
{
	int val[3];

	if (argc != 4)
		return (0);
	ft_pars(val, argv);
	if (val[1] == 0)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	if ((val[1] >= 4 && val[1] <= 5) && val[2] == 0)
	{
		if (val[1] == 4)
			ft_putstr("Stop : division by zero\n");
		else if (val[1] == 5)
			ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_display(val);
	return (0);
}
