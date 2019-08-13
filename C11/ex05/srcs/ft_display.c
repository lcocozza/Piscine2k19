/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 11:56:10 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/17 04:51:08 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void			ft_display(int *val)
{
	int(*ft[5])(int, int);

	ft[0] = &ft_add;
	ft[1] = &ft_sous;
	ft[2] = &ft_multi;
	ft[3] = &ft_div;
	ft[4] = &ft_mod;
	ft_putnbr((*ft[val[1] - 1])(val[0], val[2]));
	ft_putchar('\n');
}
