/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 00:15:09 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/10 10:50:33 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main()
{
	char *dest;
	char src[] = "bite test";

	dest = ft_strdup(src);
	printf("%s\n", dest);
	return 0;
}
