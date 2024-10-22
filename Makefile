NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(OBJ) $(NAME)
	$(CC) -o $@ main.o -L. -lft
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
