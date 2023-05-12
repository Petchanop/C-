# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 17:36:15 by npiya-is          #+#    #+#              #
#    Updated: 2023/04/11 17:39:52 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex00

CC=c++

CFLAGS=-std=c++98 -Wall -Werror -Wextra 

SRCS= ClapTrap.cpp \
	main.cpp

OBJS=$(SRCS:%.cpp=%.o)

RM=rm -rf

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME) $(NAME).dSYM

re:fclean all

.PHONY:all clean fclean re