/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:57:18 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/22 13:21:10 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include "ft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <libgen.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>

# define NEG(Value) (Value < 0 ? 0 : Value)

void	ft_tail(int offset, char **files, int size);
int		ft_pars(int size, char **params);
void	ft_display(char *filename, int offset);

#endif
