##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

NAME	=	generator

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
	@echo -e $(CBLUE)======[BUILDING GEN]=====$(END)
	make $(MFLAGS)
	@echo -e $(CBLUE)======[COMPLETE GEN]=====$(END)
	$(CC) -o $(NAME) $(OBJ) $(LFLAGS) $(CFLAGS) -g3
	rm -f *.o

clean:
	@echo -e $(CRED)======[CLEANING GEN]=====$(END)
	rm -f $(NAME)
	rm -f *.o
	rm -f vgcore.*
	@echo -e $(CRED)======[CLEANED GEN]=====$(END)

fclean:	clean
	make $(MFLAGS) clean

re:	fclean all

%.o: %.c
	gcc -o $@ -c $< $(CFLAGS)
