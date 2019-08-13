.SILENT:

NAME= do-op

SRC_FILE=	ft_do_op.c \
			ft_parsing.c \
			ft_display.c

LIB_FILE=	ft_atoi.c \
			ft_isspace.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_strlen.c

SRC_PATH= srcs/
LIB_PATH= libft/

SRC= $(addprefix $(SRC_PATH), $(SRC_FILE))
LIB= $(addprefix $(LIB_PATH), $(LIB_FILE))

INCL_PATH= -I includes/

FLAGS= -Wall -Werror -Wextra -o

$(NAME):
	gcc $(FLAGS) $(NAME) main.c $(SRC) $(LIB) $(INCL_PATH)

all: $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
