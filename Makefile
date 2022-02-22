CFLAGS = gcc -Wall -Wextra -Werror -o
NAME = push_swap
 
SRC = srcs/adjust.c \
		srcs/algo.c \
		srcs/algo_small.c \
		srcs/init.c \
		srcs/main.c \
		srcs/operations_1.c \
		srcs/operations_2.c \
		srcs/operations_3.c \

all: $(NAME)
$(NAME):
	@$(MAKE) -C libft/ re
	$(CFLAGS) $(NAME) $(SRC) -L libft/ -lft

clean:
	@$(MAKE) -C libft/ clean

fclean: fclean
	rm -f $(NAME)
	@$(MAKE) -C libft/ fclean

re: fclean all