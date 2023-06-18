# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 22:14:16 by npiya-is          #+#    #+#              #
#    Updated: 2023/06/18 20:09:08 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex01

CXX=c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address

SRCS=main.cpp \
	Span.cpp

OBJS=$(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS) $(NAME).dSYM

fclean:clean
	rm -rf $(NAME)

re:fclean all

.PHONY:clean fclean re all
