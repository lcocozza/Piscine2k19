/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 19:30:40 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/09 00:20:23 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int main()
{
	char str[] = "--435467bacdabihj";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return 0;
}
