/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 02:04:04 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/14 16:02:31 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char **ft_split(char *str, char *charset);

int	main()
{
	int i;
	char **tab;
	char str[] = " test,de chaine ,bite,";

	i = 0;
	tab = ft_split(str, ", ");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return 0;
}
