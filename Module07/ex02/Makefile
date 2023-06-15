# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 17:39:20 by npiya-is          #+#    #+#              #
#    Updated: 2023/06/15 23:51:31 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex02

CXX=c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS= main.cpp

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
