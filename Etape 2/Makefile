##
## ETNA PROJECT, 17/04/2019 by soubri_j
## Makeflile
## File description: 
##      Makefile for Etape1.
##

CCFLAGS 		= -Wextra -Wall -Werror 
CC 				= g++
SRC				= $(shell ls *.cpp)
PROG_NAME		=  main
RM				= rm -f
OBJ				= $(SRC:.cpp=.o)

all: $(PROG_NAME)

$(PROG_NAME): $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(PROG_NAME)

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(PROG_NAME)

re: fclean all

.PHONY: all $(LIB_NAME) clean fclean re
