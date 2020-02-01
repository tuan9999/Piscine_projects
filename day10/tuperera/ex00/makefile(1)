#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tuperera <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/19 11:13:55 by tuperera      #+#    #+#                  #
#    Updated: 2019/08/19 11:13:56 by tuperera      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADER = ./includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADER) -c $(SRC)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re:
	fclean all
