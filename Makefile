SRC += ft_parse_sorting2.c
SRC += ft_parse_sorting.c
SRC += ft_parsetab.c
SRC += ft_push.c
SRC += ft_pushswap.c
SRC += ft_radix.c
SRC += ft_reverse.c
SRC += ft_rotate.c
SRC += ft_ss.c
SRC += ft_struct.c
SRC += ft_utils.c
SRC += ft_utils2.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I. -g

EXEC = push_swap

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ) 

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(EXEC)

run:
	./$(EXEC) "5 4 2 3 1"

re: fclean all

.PHONY: all clean fclean re

