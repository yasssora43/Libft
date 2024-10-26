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

test:$(NAME) main.c
	$(CC) -o $@ main.c -L. -lft
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) test
re: fclean all

.PHONY: all clean fclean re
