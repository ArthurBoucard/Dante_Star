##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	name

GEN	=	-C./generator
SOLV	=	-C./solver

END		+=	\e[0m"
CBLUE	+=	"\e[1;34m
CRED	+=	"\x1b[31m

all:	$(NAME)

$(NAME):	$(OBJ)
	@echo -e $(CBLUE)======[COMPILING ALL]=====$(END)
	make $(GEN)
	make $(SOLV)
	@echo -e $(CBLUE)======[COMPILED ALL]=====$(END)

clean:
	@echo -e $(CRED)======[CLEANING ALL]=====$(END)
	make $(GEN) clean
	make $(SOLV) clean
	@echo -e $(CRED)======[CLEANED ALL]=====$(END)

fclean:
	@echo -e $(CRED)======[FCLEANING ALL]=====$(END)
	make $(GEN) fclean
	make $(SOLV) fclean
	@echo -e $(CRED)======[FCLEANED ALL]=====$(END)

re:	fclean all
