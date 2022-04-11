# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 18:46:58 by aait-ham          #+#    #+#              #
#    Updated: 2022/03/29 18:47:00 by aait-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=phoneBook

CC=clang++
FLAGS= -Wall -Wextra -Werror

SRC= Contact.cpp PhoneBook.cpp Main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	echo "no object files"

fclean:
	rm -rf $(NAME)

re: fclean all
