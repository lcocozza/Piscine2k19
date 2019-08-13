/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 16:36:03 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/21 03:13:12 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);

int main()
{
	char str[] = "zizi-memory       ___            //  7          (_,_/\\           \\    \\            \\    \\           _\\    \\__      (   \\     )      \\___\\___/   ";
	ft_print_memory((void *)str, strlen(str));
	return (0);
}
