/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 09:02:29 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/03 13:26:52 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmpa;
	int tmpb;

	tmpa = *a;
	tmpb = *b;
	*a = tmpa / tmpb;
	*b = tmpa % tmpb;
}
