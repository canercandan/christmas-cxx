##
## Makefile for colle1 in /home/candan_c/cu/rendu/cpp/colle1_cpp
## 
## Made by caner candan
## Login   <candan_c@epitech.net>
## 
## Started on  Sun May 25 10:11:27 2008 caner candan
## Last update Sun May 25 10:17:08 2008 caner candan
##

NAME		=	colle1

SRCS		=	main.cpp			\
			Carton.cpp			\
			ElfDePePeNoel.cpp		\
			Emballage.cpp			\
			ITapisRoulant.cpp		\
			Jouet.cpp			\
			Nounours.cpp			\
			Objet.cpp			\
			PapierCadeau.cpp		\
			PetitPoney.cpp			\
			TablePePeNoel.cpp		\
			TapisRoulantAleat.cpp		\
			TapisRoulantDef.cpp		\
			TapisRoulantPePeNoel.cpp

OBJS		=	$(SRCS:.cpp=.o)

CFLAGS		=	-W -Wall -Werror

CC		=	g++
RM		=	rm -f

$(NAME)		:	$(OBJS)
			$(CC) -o $@ $(OBJS)

all		:	$(NAME)

clean		:
			$(RM) *~
			$(RM) *.o

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
