##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## eh wleh ayre bel hayet
##

CPPFLAGS	=	-I ./include

CFLAGS	=	-Wall -Wextra

SRC	=	src/calc.c				\
		src/eval_expr.c			\
		src/my_strlen.c			\
		src/main.c				\
		src/my_putchar.c		\
		src/my_put_nbr.c		\
		infin_add/my_infin_add.c\
		infin_add/len_res		\
		infin_add/my_putstr.c	\
		infin_add/my_revstr.c

OBJ 	=	$(SRC:.c=.o)

NAME	=	eval_expr

all: 		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)


fclean:	clean
	rm -f $(NAME)

re: 		fclean all
