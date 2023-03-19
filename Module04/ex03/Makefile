# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 17:25:16 by npiya-is          #+#    #+#              #
#    Updated: 2023/03/20 00:05:43 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex03

CC=c++

CFLAGS= -std=c++98 -Wall -Werror -Wextra

SRCS= AMateria.cpp \
	Cure.cpp \
	Ice.cpp \
	Character.cpp \
	IMateriaSource.cpp \
	MateriaSource.cpp \
	ICharacter.cpp \
	floor.cpp \
	main.cpp \

OBJS=$(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug:$(SRCS)
	$(CC) -g $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(NAME).dSYM

re:fclean all

.PHONY: all clean fclean re