##
## EPITECH PROJECT, 2022
## Makefile for lib
## File description:
## Compiles and builds mylib
##

SCR	=	my_strlen.c	\
		write_error.c	\
		is_digit.c	\
		str_to_int.c	\
		print_map.c	\
		get_colon.c

OBJ	=	$(SCR:.c=.o)

INL = my.h

NAME	=	libmy.a

all: $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(INL) ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
