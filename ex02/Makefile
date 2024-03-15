# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 02:07:14 by yamajid           #+#    #+#              #
#    Updated: 2024/03/15 16:46:47 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	MutantStack
Run		=	c++ -g
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	 main.cpp 

otherS = $(SRCS:.cpp=.o)

all: $(NAME)
%.o: %.cpp
	$(Run) $(FLAGS) -c $< -o $@

$(NAME): $(otherS) MutantStack.hpp
	$(Run) $(FLAGS) -o $(NAME) $(otherS)

clean:
	$(RM) $(otherS)
fclean: clean
	$(RM) $(NAME) 

re: fclean all