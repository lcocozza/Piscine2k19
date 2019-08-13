/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 19:38:08 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/25 20:31:47 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	t_list *list = 0;

	// while (i < argc)
	// {
		list = ft_list_push_strs(0, argv);
		i++;
	// }
	ft_print_list(list);
	return 0;
}
