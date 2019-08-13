NAME= libft.a

SRC_FILE=	ft_atoi.c \
			ft_calloc.c \
			ft_fd_putstr.c \
			ft_isdigit.c \
			ft_isspace.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_split.c \
			ft_str_is_numeric.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlen.c \
			ft_swap.c

OBJ_FILE= $(SRC_FILE:%.c=%.o)

SRC= $(addprefix $(SRC_PATH), $(SRC_FILE))
OBJ= $(addprefix $(SRC_PATH), $(OBJ_FILE))

SRC_PATH= srcs/

INCL_PATH= -I includes/

FLAGS= -Wall -Wextra -Werror -c

$(NAME):
	gcc $(FLAGS) $(SRC) $(INCL_PATH)
	mv $(OBJ_FILE) $(SRC_PATH)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
