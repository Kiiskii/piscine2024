# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akiiski <akiiski@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 15:43:56 by akiiski           #+#    #+#              #
#    Updated: 2024/08/21 09:40:24 by akiiski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror -I includes

SRCS =  srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
	srcs/ft_strcmp.c

NAME = libft.a

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) -o $@ $^

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re:	fclean all
