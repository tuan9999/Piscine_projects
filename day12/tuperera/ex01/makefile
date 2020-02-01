#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tuperera <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/21 17:49:46 by tuperera      #+#    #+#                  #
#    Updated: 2019/08/21 17:49:46 by tuperera      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = ft_cat
SRC = main.c function.c
INCLUDE = ft_list.h

all: ${NAME}

${NAME}:
	gcc -Wall -Wextra -Werror -I $(INCLUDE) -c ${SRC}
	cc -Wall -Wextra -Werror -I $(INCLUDE) -o ${NAME} *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all
