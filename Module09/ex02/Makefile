# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/01 15:01:49 by npiya-is          #+#    #+#              #
#    Updated: 2023/07/14 20:59:05 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=PmergeMe

CXX=c++

CXXFLAGS=-Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS= main.cpp \

OBJS=$(SRCS:%.cpp=%.o)

.PHONY:all clean fclean re

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS) $(NAME).dSYM

fclean:clean
	rm -rf $(NAME)

re:fclean all
