##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

NAME	=	solver

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

LFLAGS	=	-L./lib -lmy
MFLAGS	=	-C./lib/my
CFLAGS	=	-I./include

all:	$(NAME)

END		+=	\e[0m"
CBLUE	+=	"\e[1;34m
CRED	+=	"\x1b[31m

$(NAME):	$(OBJ)
	@echo -e $(CBLUE)======[BUILDING SOLV]=====$(END)
	make $(MFLAGS)
	@echo -e $(CBLUE)======[COMPLETE SOLV]=====$(END)
	$(CC) -o $(NAME) $(OBJ) $(LFLAGS) $(CFLAGS) -g3
	rm -f *.o

clean:
	@echo -e $(CRED)======[CLEANING SOLV]=====$(END)
	rm -f $(NAME)
	rm -f *.o
	rm -f vgcore.*
	@echo -e $(CRED)======[CLEANED SOLV]=====$(END)

fclean:	clean
	make $(MFLAGS) clean

re:	fclean all

%.o: %.c
	gcc -o $@ -c $< $(CFLAGS)
