# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pminne <pminne@student-42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 02:26:02 by pminne            #+#    #+#              #
#    Updated: 2020/11/26 15:57:58 by pminne           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CPP	=	clang++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

HEADER	=	phonebook.hpp\

SRC	=	main.cpp\
		phonebook.cpp\

OBJ	=	$(SRC:.cpp=.o)

EXEC	=	phonebook

all:	$(EXEC)

$(EXEC):	$(OBJ)
	$(CPP) -o $@ $^

%.o:	%.cpp $(HEADER)
	$(CPP) -o $@ -c $< -I $(CPPFLAGS)

fclean	:	clean
	rm -rf $(EXEC)

clean	:
	rm -rf $(OBJ)

re:		fclean all

.PHONY: all fclean clean re
