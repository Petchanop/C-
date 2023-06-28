# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 21:08:25 by npiya-is          #+#    #+#              #
#    Updated: 2023/06/28 21:35:40 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ex02

CXX=c++

CPPFLAGS= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCS= Bureaucrat.cpp \
	AForm.cpp \
	Form.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp \
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
