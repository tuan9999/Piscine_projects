# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tuperera <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/19 18:16:53 by tuperera       #+#    #+#                 #
#    Updated: 2019/08/25 16:45:11 by nben-ezr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

SRC = src/printf.c src/gen_fncts.c

OBJ = printf.o gen_fncts.o

.PHONY: clean fclean re all

all: ${NAME}

${NAME}:
	gcc -Wall -Wextra -Werror -o ${NAME} ${SRC}

clean:
	/bin/rm -f ${OBJ}

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all
