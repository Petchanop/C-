# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 18:03:04 by npiya-is          #+#    #+#              #
#    Updated: 2023/05/30 00:55:37 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= convert

CXX= c++

CPPFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS= ScalarConverter.cpp \
	main.cpp \

OBJS=$(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS) $(NAME).dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all clean fclean re