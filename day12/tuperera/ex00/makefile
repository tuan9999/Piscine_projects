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

NAME = ft_display_file
SRC = src/main.c

all: ${NAME}

${NAME}:
	gcc -Wall -Wextra -Werror -c ${SRC}
	cc -Wall -Wextra -Werror -o ${NAME} *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all
