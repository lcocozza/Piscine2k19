/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:40:35 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/21 22:29:51 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	main(int argc, char **argv)
{
	int param;

	param = 0;
	if (argc > 1)
		param = ft_pars(argc, argv);
	if (param >= 0)
		ft_tail(param, argv, argc);
	return (0);
}
