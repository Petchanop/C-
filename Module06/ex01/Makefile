# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 19:32:01 by npiya-is          #+#    #+#              #
#    Updated: 2023/05/31 19:35:16 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ex01

CC=c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS= main.cpp \
	Serializer.cpp \

OBJS=$(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS) $(NAME).dSYM

fclean: clean
	rm -rf $(NAME)

re:fclean all

.PHONY:all clean fclean re