/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 01:55:12 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/14 12:32:35 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int		ft_count_word(char *str, char *charset)
{
	int	i;
	int	nb;
	int	bl;

	i = 0;
	nb = 0;
	while (str[i])
	{
		bl = 0;
		while (ft_strchr(str[i], charset) && str[i])
			i++;
		while (!ft_strchr(str[i], charset) && str[i])
		{
			nb += (bl ? 0 : 1);
			bl = 1;
			i++;
		}
	}
	return (nb);
}

static char		*ft_cut_word(char *str, char *charset, int *i)
{
	int		j;
	int		len;
	char	*strnew;

	j = 0;
	len = 0;
	while (ft_strchr(str[*i], charset) && str[*i])
		*i += 1;
	while (!ft_strchr(str[*i + len], charset) && str[*i + len])
		len++;
	if ((strnew = malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	while (j < len)
	{
		strnew[j] = str[*i];
		j++;
		*i += 1;
	}
	strnew[j] = '\0';
	return (strnew);
}

char			**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;
	int		offset;
	int		tab_size;

	i = 0;
	offset = 0;
	tab_size = ft_count_word(str, charset);
	if ((tab = malloc(sizeof(char *) * tab_size + 1)) == NULL)
		return (NULL);
	while (i < tab_size)
	{
		tab[i] = ft_cut_word(str, charset, &offset);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
