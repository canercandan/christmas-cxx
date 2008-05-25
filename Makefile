##
## Makefile for colle1 in /home/candan_c/cu/rendu/cpp/colle1_cpp
## 
## Made by caner candan
## Login   <candan_c@epitech.net>
## 
## Started on  Sun May 25 10:11:27 2008 caner candan
## Last update Sun May 25 15:37:20 2008 caner candan
##

LT_NAME		=	LutinHouse
WM_NAME		=	WarpMachine

LT_SRCS		=	main.cpp			\
			Carton.cpp			\
			ElfDePePeNoel.cpp		\
			Emballage.cpp			\
			Jouet.cpp			\
			Nounours.cpp			\
			Objet.cpp			\
			PapierCadeau.cpp		\
			PetitPoney.cpp			\
			TablePePeNoel.cpp		\
			TableAleat.cpp			\
			TableDef.cpp			\
			TapisRoulantAleat.cpp		\
			TapisRoulantDef.cpp		\
			TapisRoulantPePeNoel.cpp	\
			Chaussette.cpp

WM_SRCS		=	WarpMachine.cpp

LT_OBJS		=	$(LT_SRCS:.cpp=.o)
WM_OBJS		=	$(WM_SRCS:.cpp=.o)

CFLAGS		=	-W -Wall -Werror

CC		=	g++
RM		=	rm -f
MK		=	make

all		:
			@$(MK) $(LT_NAME)
			@$(MK) $(WM_NAME)

$(LT_NAME)	:	$(LT_OBJS)
			$(CC) -o $@ $(LT_OBJS)

$(WM_NAME)	:	$(WM_OBJS)
			$(CC) -o $@ $(WM_OBJS)

clean		:
			$(RM) *~
			$(RM) *.o
			$(RM) *.core

fclean		:	clean
			$(RM) $(WM_NAME)
			$(RM) $(LT_NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
