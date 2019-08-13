/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:47:38 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/16 22:43:36 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	ft_any(char **tab, int(*f)(char*));

int	ft_is_num(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char *tab[4];

	tab[0] = "bite";
	tab[1] = "test42";
	tab[2] = "42";
	tab[3] = NULL;

	printf("%d\n", ft_any(tab, &ft_is_num));
	return (0);
}
