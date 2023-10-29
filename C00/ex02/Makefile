# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 15:01:23 by iortega-          #+#    #+#              #
#    Updated: 2023/10/29 12:51:19 by iortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= account

CC		= g++

STANDARD_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS			= tests.cpp \
				Account.cpp
				

OBJS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME): $(OBJS)
				$(CC) $(OBJS) $(STANDARD_FLAGS) -o $(NAME)

%.o: %.cpp
				$(CC) $(STANDARD_FLAGS) -c $<

clean:
				rm -rf $(OBJS)

fclean:
				make clean
				rm -rf $(NAME)
re:
				make fclean
				make