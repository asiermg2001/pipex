NAME = pipex
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c child.c free.c utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		make -C libft
		@$(CC) $(SRC) Libft/libft.a -o $(NAME)

clean :
		$(RM) $(OBJ)
		make clean -C libft

fclean : clean
		make fclean -C libft
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re