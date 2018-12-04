#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: creek <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 17:44:13 by creek             #+#    #+#              #
#    Updated: 2018/11/23 21:05:07 by creek            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_swap.c ./srcs/ft_strcmp.c

HDR = ./includes

all: $(NAME) 

$(NAME):
	gcc -c $(SRCS) -I $(HDR) 
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean 
	/bin/rm -f $(NAME)	

re:	fclean all