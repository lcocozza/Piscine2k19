/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllefebv <fllefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 20:09:44 by fllefebv          #+#    #+#             */
/*   Updated: 2019/07/21 20:28:32 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_display(t_seg nb, t_words list)
{
	int i;
	int j;

	i = nb.size;
	j = 0;
	while (i > 0)
	{
		while (nb.seg[i][j])
		{
			while (nb.seg[i][j] = 'x')
				j++;
			if (nb.seg[i][0] != '0')
			{
				ft_putstr(list.unit[ft_atoi(nb.seg[i][0]) - 1]);
				ft_putstr(list.except[1]);
			}
			j++;
			if (nb.seg[i][1] == 0)
			{
				j++;
				if(nb.seg[i][2] == 0)
					j++;
				if(nb.seg[i][2] != 0)
					ft_putstr(list.unit[ft_atoi(nb.seg[i][2]) - 1]);
			}
			if (nb.seg[i][1] == 1)
				ft_putstr(list.case[ft_atoi(nb.seg[i][2]) - 1]);
			if (nb.seg[i][1] != 0 && nb.seg[i][1] != 1)
				ft_putstr(list.decade[ft_atoi(nb.seg[i][1]) - 1]);
			j++;
			if (nb.seg[i][2] != 0 && nb.seg[i][1] != 1)
				ft_putstr(list.unit[ft_atoi(nb.seg[i][2]) - 1]);
		}
		i--;
	}
}
