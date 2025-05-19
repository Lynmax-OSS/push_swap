NAME=push_swap

CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

SRCS= push_swap.c $(wildcard utils/*.c stack_ops/*.c)
OBJS=$(SRCS:.c=.o)
LIBFT_DIR=libft

libft:
	@echo "Compiling libft..."
	make all -C $(LIBFT_DIR)
	@echo "Libft compiled."

all: $(NAME)

$(NAME): $(OBJS) libft
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBFT_DIR) -lft
	@echo "Compilation complete."

clean:
	$(RM) $(OBJS)
	@echo "Object files removed."

fclean: clean
	$(RM) $(NAME) && make fclean -C $(LIBFT_DIR)
	@echo "Executable removed."

re: fclean all
	@echo "Recompilation complete."

.PHONY: all clean fclean re libft