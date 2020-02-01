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

NAME = bsq

SRC = src/main.c src/functions.c src/bsq.c src/extrafncts.c

OBJ = main.o functions.o bsq.o extrafncts.o

.PHONY: clean fclean re all

all: ${NAME}

${NAME}:
	gcc -Wall -Wextra -Werror -o ${NAME} ${SRC}

clean:
	/bin/rm -f ${OBJ}

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all
