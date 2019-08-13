/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:57:18 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/15 12:02:29 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include "ft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

void	ft_tail(char **files, int size);
void	ft_tail_c(int offset, char **files, int size);
int		ft_pars(int size, char **params);
void	ft_display_line(int fd);
void	ft_display_char(int fd, int offset);

#endif
