##
## EPITECH PROJECT, 2022
## BSQ Makefile
## File description:
## compiles and builds island BSQ from the source files
## and the lib as well
##

NAME	=	bsq

SRC	=	source/open_file.c	\
		source/main.c 	\
		source/check_first_line.c	\
		source/wraper_function.c	\
		source/map_create.c	\
		source/map_format.c	\
		source/check_content.c


CPPFLAGS = -Wall -Wextra -I./include

OBJ	=	$(SRC:.c=.o)

TESTS = tests/

TEST_INCLUDE = -L./lib/ -lmy --coverage -lcriterion

TEST_NAME = unit_test

LIB 	=	-lmy

DIR	=	-L./lib/

all: $(OBJ)
	$(MAKE) -C ./lib/my
	gcc -o $(NAME) $(OBJ) $(DIR) $(LIB)

clean:
	rm -f $(OBJ)
	$(MAKE) clean -C ./lib/my

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./lib/my

re: fclean all

unit_tests: re
		gcc -o $(TEST_NAME) $(TESTS) $(OBJ) $(TEST_INCLUDE)

run_tests:
			./$(TEST_NAME)
