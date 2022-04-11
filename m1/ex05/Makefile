# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 15:33:51 by aait-ham          #+#    #+#              #
#    Updated: 2022/04/01 15:33:52 by aait-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=harl
SRC=  Harl.cpp main.cpp

all: $(NAME)

$(NAME):
	c++ --std=c++98 -Wall -Wextra -Werror $(SRC)  -o $(NAME)

clean:
	@echo "nothing to clean"

fclean: clean
	rm -f $(NAME)
re: fclean all
