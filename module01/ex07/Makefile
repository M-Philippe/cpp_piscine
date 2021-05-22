# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 02:26:02 by pminne            #+#    #+#              #
#    Updated: 2020/10/06 13:08:57 by user42           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CPP	=	clang++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 

SRC	=	main.cpp

OBJ	=	$(SRC:.cpp=.o)

EXEC	=	ft_sed

all:	$(EXEC)

$(EXEC):	$(OBJ)
	$(CPP) -o $@ $^

%.o:	%.cpp
	$(CPP) -o $@ -c $< $(CPPFLAGS)

fclean	:	clean
	rm -rf $(EXEC)

clean	:
	rm -rf $(OBJ)

re:		fclean all

.PHONY: all fclean clean re
