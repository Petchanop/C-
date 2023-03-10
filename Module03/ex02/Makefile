# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 19:50:41 by npiya-is          #+#    #+#              #
#    Updated: 2023/03/10 20:45:19 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex02

CC=c++

CFLAGS= -std=c++98 -Wall -Werror -Wextra

SRCS=ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	main.cpp \

OBJS=$(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY:all clean fclean re