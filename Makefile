##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c		\
		src/utils.c		\
		src/sokoban.c	\
		src/error.c		\
		src/moves.c		\
		src/resets.c	\
		src/lose.c

OBJ	=	$(SRC:.c=.o)

NAME    =	my_sokoban

CPPFLAGS	=	-I./include

CFLAGS	=	-Wall -Wextra

all:    $(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	$(CC) -o $(NAME) $(OBJ) -L./lib/my -lmy -lncurses

debug:		$(OBJ)
	$(MAKE) -C lib/my
	$(CC) -o $(NAME) $(OBJ) -L./lib/my -lmy -lncurses -g3

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)
	$(MAKE) fclean -C lib/my

re:     fclean all

.PHONY: all clean fclean re debug
