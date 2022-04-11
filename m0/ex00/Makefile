# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 18:45:49 by aait-ham          #+#    #+#              #
#    Updated: 2022/03/29 18:45:51 by aait-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone

CC=clang++
FLAGS= -Wall -Wextra -Werror

SRC= ./megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	echo "no object files"

fclean:
	rm -rf $(NAME)

re: fclean all
