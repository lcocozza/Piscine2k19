/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 01:25:38 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/18 06:43:30 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int ascend;
	int descend;

	i = 0;
	ascend = 1;
	descend = 1;
	if (length >= 0 && length <= 1)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			ascend = 0;
		else if ((*f)(tab[i], tab[i + 1]) > 0)
			descend = 0;
		i++;
	}
	return (ascend || descend ? 1 : 0);
}
