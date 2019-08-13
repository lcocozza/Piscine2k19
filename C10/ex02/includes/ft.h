/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 01:42:37 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/22 04:05:29 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_fd_putstr(char *str, int fd);
void	ft_putstr(char *str);
int		ft_str_is_numeric(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_isspace(char c);

#endif
