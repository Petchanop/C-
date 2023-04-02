# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 16:35:37 by npiya-is          #+#    #+#              #
#    Updated: 2023/04/02 16:39:18 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex01

CC=c++

CFLAGS=-std=c++98 -Wall -Werror -Wextra

RM= rm -rf

SRCS=Fixed.cpp \
	main.cpp

OBJS=$(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re:fclean all

.PHONY:all clean fclean re