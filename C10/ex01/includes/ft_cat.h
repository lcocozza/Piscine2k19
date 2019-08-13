/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:57:18 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/22 03:46:28 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include "ft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <libgen.h>
# include <string.h>
# include <errno.h>

void	ft_cat(char *prog, char *filename);
void	ft_read_file(int fd);
void	ft_print_is_directory(char *prog, char *filename);
void	ft_print_not_found(char *prog, char *filename);
void	ft_graphic_input(void);

#endif
