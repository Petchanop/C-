# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 17:25:31 by npiya-is          #+#    #+#              #
#    Updated: 2023/03/02 17:30:40 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
C_FLAGS= -std=c++98 -Wall -Wextra -Werror
SRCS = phonebook.cpp \
		contact.cpp

OBJS=$(SRCS:%.cpp=%.o)

NAME=phonebook

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(C_FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:fclean all

.PHONY:all clean fclean re
