##
## ETNA PROJECT, 17/04/2019 by soubri_j
## Makeflile
## File description: 
##      Makefile for Etape1.
##

CCFLAGS 		= -W -Wall -Werror -shared
CC 				= g++
SRC				= $(shell ls *.cpp)
PROG_NAME		=  main
RM				= rm -f

all: $(PROG_NAME)

$(PROG_NAME):
	$(CC) $(CCFLAGS) -o $(PROG_NAME) $(SRC)

clean: 
	$(RM) 

fclean: clean cleanlink
	$(RM) $(LIB_NAME)

re: fclean all

.PHONY: all $(LIB_NAME) clean fclean re
