# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 16:37:32 by npiya-is          #+#    #+#              #
#    Updated: 2023/04/07 16:41:28 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex00

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
	$(RM) $(NAME) $(NAME).dSYM

re:fclean all

.PHONY:all clean fclean re