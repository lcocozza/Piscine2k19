/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 23:25:07 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/17 23:27:51 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int 	main(int ac, char **av)
{
	int i;

	i = 0;
	ft_sort_string_tab(av);
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return 0;
}
