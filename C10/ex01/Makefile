.SILENT:

NAME= ft_cat

SRC_FILE=	ft_cat.c

SRC_PATH= srcs/

SRC= $(addprefix $(SRC_PATH), $(SRC_FILE))

INCL_PATH= -I includes/

LIB= libft/ft_putstr.c libft/ft_fd_putstr.c libft/ft_strlen.c

FLAGS= -Wall -Werror -Wextra -o

$(NAME):
	gcc $(FLAGS) $(NAME) main.c $(SRC) $(LIB) $(INCL_PATH)

all: $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
