/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:26:09 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/07 14:45:33 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (to_find[i] && str[j])
	{
		if (to_find[i] == str[j])
			i++;
		else
			i = 0;
		j++;
	}
	return (to_find[i] ? 0 : &str[j - i]);
}
