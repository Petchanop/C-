# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/25 21:20:10 by npiya-is          #+#    #+#              #
#    Updated: 2023/06/25 21:27:45 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=RPN

CXX=c++

CXXFLAGS=-Wall -Werror -Wextra -std=c++98

SRCS= main.cpp \
	RPN.cpp

OBJS=$(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS) $(NAME).dSYM

fclean:clean
	rm -rf $(NAME)

re:fclean all

.PHONY:all clean fclean re
