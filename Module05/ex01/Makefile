# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 21:08:25 by npiya-is          #+#    #+#              #
#    Updated: 2023/05/23 14:52:22 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ex01

CXX= c++

CPPFLAGS= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCS= Bureaucrat.cpp \
	Form.cpp \
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