# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mlanari <marvin@codam.nl>                    +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/26 13:16:40 by mlanari       #+#    #+#                  #
#    Updated: 2020/07/26 20:54:46 by pspijkst      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

rush02: main.o init_dict.o dict_tools.o divide_input.o divide_input2.o 
	gcc main.o init_dict.o dict_tools.o divide_input.o divide_input2.o -o rush02

main.o: main.c
	gcc -c main.c

init_dict.o: init_dict.c
	gcc -c init_dict.c

dict_tools.o: dict_tools.c
	gcc -c dict_tools.c

divide_input.o: divide_input.c
	gcc -c divide_input.c

divide_input2.o: divide_input2.c
	gcc -c divide_input2.c

fclean:
	rm *.o rush02
