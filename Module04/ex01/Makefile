# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 19:39:02 by npiya-is          #+#    #+#              #
#    Updated: 2023/03/13 23:18:17 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++ 
CFLAGS=-std=c++98 -Wall -Werror -Wextra

SRCS= Animal.cpp \
	Brain.cpp \
	Dog.cpp \
	Cat.cpp \
	main.cpp \
	# WrongAnimal.cpp \
	# WrongCat.cpp \

OBJS=$(SRCS:%.cpp=%.o)

NAME=ex01

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug:$(SRCS)
	$(CC) -g $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME) $(NAME).dSYM

re:fclean all

.PHONY:all debug clean fclean re
