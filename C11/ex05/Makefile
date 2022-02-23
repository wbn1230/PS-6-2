SRCS = srcs/main.c srcs/op_add.c srcs/op_sub.c srcs/op_mult.c srcs/op_div.c srcs/op_mod.c srcs/ft_atoi.c srcs/ft_putnbr.c
OBJS = $(SRCS:.c=.o)
INC = ./includes/
NAME = do_op
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all :
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
