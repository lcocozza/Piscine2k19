/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:00:47 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/16 18:43:21 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char **argv)
{
	char *tab[4];
	char *str = NULL;

	(void)argc;
	(void)argv;
	tab[0] = "bite";
	tab[1] = "bitus";
	tab[2] = "bitas";
	tab[3] = "bitur";

	str = ft_strjoin(argc, argv, ", ");
	printf("%s", str);
	free(str);
	return 0;
}
