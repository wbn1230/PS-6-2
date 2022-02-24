# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 08:58:15 by wonbpark          #+#    #+#              #
#    Updated: 2022/02/24 12:53:03 by wonbpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/main.c ./srcs/op_add.c ./srcs/op_sub.c ./srcs/op_mult.c ./srcs/op_div.c ./srcs/op_mod.c ./srcs/ft_atoi.c ./srcs/ft_putnbr.c
OBJS = $(SRCS:.c=.o)
INC = ./includes/
NAME = do-op
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c -o $@ $^ -I $(INC)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
