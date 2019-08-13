# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nabouvet <nabouvet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 14:23:58 by nabouvet          #+#    #+#              #
#    Updated: 2019/07/21 04:05:29 by lucocozz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS_F =	ft_parsing.c \
			ft_count_unit.c \
			ft_arguments.c \

SRCS_P = srcs/

SRC = $(addprefix $(SRCS_P), $(SRCS_F))

LIBFT = -L libft/ -lft

OPTION = -I includes/

CFLAGS = -Wall -Werror -Wextra -o $(NAME)

all = $(NAME)

$(NAME) :
		gcc  $(CFLAGS) main.c $(LIBFT) $(SRC)

clean:

fclean : clean
		rm -f $(NAME)

re : fclean all

magic:
		./.magic_file
