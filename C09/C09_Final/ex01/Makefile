# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 16:02:34 by wonbpark          #+#    #+#              #
#    Updated: 2022/02/24 09:38:38 by wonbpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
INCLUDES = ./includes/
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all : $(NAME)

.c.o :
		$(CC) $(CFLAGS) -c -o $@ $^ -I $(INCLUDES)

$(NAME) : $(OBJS)
		ar -rc $(NAME) $(OBJS)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
