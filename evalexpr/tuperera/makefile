#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tuperera <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/19 18:16:53 by tuperera      #+#    #+#                  #
#    Updated: 2019/08/19 18:16:54 by tuperera      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = eval_expr 
SRC = src/
HEADER = includes/

all: ${NAME}

${NAME}:
	gcc -Wall -Wextra -Werror -I ${HEADER} -c ${SRC}*.c
	cc -Wall -Wextra -Werror -I ${HEADER} -o ${NAME} *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all
