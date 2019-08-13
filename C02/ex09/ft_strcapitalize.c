/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 11:17:48 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/05 15:22:35 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alnum(char c)
{
	if ((c >= '0' && c <= '9') ||
	(c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (!ft_is_alnum(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (ft_is_alnum(str[i - 1]) && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
