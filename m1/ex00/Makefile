# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 14:30:35 by aait-ham          #+#    #+#              #
#    Updated: 2022/04/01 14:30:36 by aait-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=zombie
SRC=Zombie.cpp randomChump.cpp newZombie.cpp main.cpp

all: $(NAME)

$(NAME):
	c++ --std=c++98 -Wall -Wextra -Werror $(SRC)  -o $(NAME)

clean:
	@echo "nothing to clean"

fclean: clean
	rm -f $(NAME)
re: fclean all
