# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 19:50:41 by npiya-is          #+#    #+#              #
#    Updated: 2023/03/11 00:16:30 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex03

CC=c++

CFLAGS= -std=c++98 -Wall -Werror -Wextra

SRCS=ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	DiamondTrap.cpp \
	main.cpp \

OBJS=$(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug:$(SRCS)
	$(CC) -g $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(NAME).dSYM

re: fclean all 

.PHONY:all clean fclean re