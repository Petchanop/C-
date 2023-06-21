# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 19:35:57 by npiya-is          #+#    #+#              #
#    Updated: 2023/06/21 21:01:47 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=btc

CXX=c++

CXXFLAGS=-Wall -Wextra -Werror -std=c++98

SRCS=main.cpp \
	BitcoinExchange.cpp

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
