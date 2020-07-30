# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bmajor <marvin@codam.nl>                     +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/29 21:44:57 by bmajor        #+#    #+#                  #
#    Updated: 2020/07/29 21:58:22 by bmajor        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

BSQ: main.o open_file.o findsq.o error.o update_print.o utils.o
	gcc -Wall -Werror -Wextra main.o open_file.o findsq.o error.o update_print.o utils.o -o BSQ

main.o: main.c
	gcc -Wall -Werror -Wextra -c main.c

open_file.o: open_file.c
	gcc -Wall -Werror -Wextra -c open_file.c

findsq.o: findsq.c
	gcc -Wall -Werror -Wextra -c findsq.c

error.o: error.c
	gcc -Wall -Werror -Wextra -c error.c

utils.o: utils.c
	gcc -Wall -Werror -Wextra -c utils.c

update_print.o: update_print.c
	gcc -Wall -Werror -Wextra -c update_print.c

clean:
	rm *.o

fclean:
	rm *.o BSQ
