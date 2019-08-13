/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:22:11 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/11 13:05:24 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;
	int res;

	fact = 1;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb >= 0 && nb <= 1)
		return (1);
	while (fact <= nb)
		res *= fact++;
	return (res);
}
