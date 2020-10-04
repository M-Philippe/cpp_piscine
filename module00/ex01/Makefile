# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 02:26:02 by pminne            #+#    #+#              #
#    Updated: 2020/10/04 22:55:43 by user42           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CPP	=	clang++

CPPFLAGS	=	-Wall -Wextra -Werror

SRC	=	main.cpp\
		phonebook.cpp\

OBJ	=	$(SRC:.cpp=.o)

EXEC	=	phonebook

all:	$(EXEC)

$(EXEC):	$(OBJ)
	$(CPP) -o $@ $^

%.o:	%.cpp phonebook.hpp
	$(CPP) -o $@ -c $< -I $(CPPFLAGS)

fclean	:	clean
	rm -rf $(EXEC)

clean	:
	rm -rf $(OBJ)

re:		fclean all

.PHONY: all fclean clean re
