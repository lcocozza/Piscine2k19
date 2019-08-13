/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_unit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabouvet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:58:56 by nabouvet          #+#    #+#             */
/*   Updated: 2019/07/20 16:42:03 by nabouvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush_02.h"

int		ft_count_unit(int nb)
{
	int		nbr;

	nbr = ft_strlen(nb) / 3;
	if (nbr == 1)
		return (nbr);
	else if (nbr >= 2)
	{
		nbr = nbr % 3;
		if (nbr != 3 || nbr / 3 != 1)
		{
			if (nbr == 1)
				nbr = nbr + 2;
			else if (nbr == 2)
				nbr = nbr + 1;
		}
	}
	return (nbr);
}
