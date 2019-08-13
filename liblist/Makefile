NAME= liblist.a

SRC_FILE=	*.c

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
