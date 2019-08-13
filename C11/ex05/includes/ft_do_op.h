/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:57:18 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/17 09:46:51 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include "ft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_multi(int a, int b);
int		ft_sous(int a, int b);
int		ft_add(int a, int b);
void	ft_do_op(int offset, char **files, int size);
void	ft_pars(int tab[3], char **params);
void	ft_display(int *val);

#endif
