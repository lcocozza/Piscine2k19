NAME= libft.a

SRC_FILE=	ft_putchar.c \
			ft_swap.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_strcmp.c

OBJ_FILE= $(SRC_FILE:.c=.o)

SRC= $(addprefix $(SRC_PATH), $(SRC_FILE))
OBJ= $(addprefix $(SRC_PATH), $(OBJ_FILE))

SRC_PATH= srcs/

INCL_PATH= -I includes/

FLAGS= -Wall -Wextra -Werror -c


all:
	gcc $(FLAGS) $(SRC) $(INCL_PATH)
	mv $(OBJ_FILE) $(SRC_PATH)
	ar rc $(NAME) $(OBJ)

$(NAME): all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
