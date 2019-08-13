/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:31:21 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/12 15:34:35 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	set_point(&point);
	printf("%d\n", point.x);
	printf("%d\n", point.y);
	return (0);
}
