.SILENT:

NAME= ft_tail

SRC_FILE=	ft_tail.c \
			ft_parsing.c \
			ft_display.c

SRC_PATH= srcs/

SRC= $(addprefix $(SRC_PATH), $(SRC_FILE))

INCL_PATH= -I includes/

LIB= -L libft/ -lft

FLAGS= -Wall -Werror -Wextra -o

$(NAME):
	gcc $(FLAGS) $(NAME) main.c $(SRC) $(INCL_PATH) $(LIB)

all: $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all
