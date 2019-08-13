.SILENT:

NAME= ft_tail

SRC_FILE=	ft_tail.c \
			ft_parsing.c \
			ft_display.c

SRC_PATH= srcs/

SRC= $(addprefix $(SRC_PATH), $(SRC_FILE))

INCL_PATH= -I includes/

LIB=	libft/ft_putstr.c libft/ft_fd_putstr.c \
		libft/ft_atoi.c libft/ft_str_is_numeric.c libft/ft_strlen.c \
		libft/ft_isspace.c libft/ft_putchar.c

FLAGS= -Wall -Werror -Wextra -o

$(NAME):
	gcc $(FLAGS) $(NAME) main.c $(SRC) $(LIB) $(INCL_PATH)

all: $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
