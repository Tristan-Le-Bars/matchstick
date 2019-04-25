##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile my libmy
## 	

SRC	=	src/matchstick.c    \
        src/map_modifier.c  \
        src/box_builder.c   \
        src/input_management.c  \
        src/ai.c    \

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick ## nom du binaire

LIB	=	./lib/my/libmy.a ## chemin de la lib a compiler

UNITEST	=	test.c ## fichier de test unitaire

T_OBJ	=	$(UNITEST:.c=.o) 

CFLAGS	=	-W -Wall -Wextra -I./include/ -g ## option de compilation

LDFLAGS	=	-lmy -L ./lib/my/ ## liste des lib

all:	$(NAME)

$(NAME): $(LIB)
	gcc -o $(NAME) $(SRC) $(LIB) -I./include/ -g

$(LIB):
	make -C ./lib/my ## compile les fichier.o pour créé la lib

clean:
	rm -f $(OBJ) $(LIB)
	rm -f *~
	rm -f ./lib/my/*.o
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

test:	$(OBJ) $(T_OBJ)        ## fait un test unitaire
	gcc -o $(NAME)_test $(OBJ) $(T_OBJ) $(LIB) -l criterion $(CFLAGS) ## test criterion
	@./$(NAME)_test
	@rm -f $(NAME)_test
