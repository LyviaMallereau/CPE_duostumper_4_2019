##
## EPITECH PROJECT, 2019
## CPE_duostumper_4_2019
## File description:
## Makefile
##

CC	=	gcc

SRC =	src/main.c

NAME =	mydb

OBJ =	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -Wall -W -Wextra -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
