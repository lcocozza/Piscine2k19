/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_02.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:23:04 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/20 23:33:46 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_O2_H
# define FT_RUSH_02_H

# include "ft.h"

typedef	struct		s_seg
{
	int		*seg;
	int		size;
}					t_seg;

typedef struct		s_words;
{
	char *except[2];		/*	0 et 100		*/
	char *unit[9];			/*	1 a 9			*/
	char *case[10];			/*	10 a 19			*/
	char *decade[8];		/*	20 a 90			*/
	char *large[3];			/*	mille a milliard*/
}					t_words;

#endif
