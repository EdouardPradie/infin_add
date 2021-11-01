##
## EPITECH PROJECT, 2021
## task01
## File description:
## D10
##

SRC	=	main.c 		\
		my_infin_add.c	\
		len_res.c

OBJ     =       $(SRC:.c=.o)

NAME	=	infin_add

override CFLAGS		+=	-Werror

override CPPFLAGS	+=	-I include/

override LDFLAGS	+=	-L lib/

override LDLIBS		+=	-lmy

all:	$(NAME)

$(NAME):	lib
$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)

lib:
	make -C ./lib/my/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/my

re:	fclean all

.PHONY: lib re fclean clean all
