# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 16:38:20 by aait-ham          #+#    #+#              #
#    Updated: 2022/04/03 16:39:01 by aait-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
SRC  = Fixed.cpp main.cpp

all: $(NAME)

$(NAME):
	@c++ --std=c++98  -Wall -Wextra -Werror $(SRC)  -o $(NAME)

clean:
	@rm -rf *.o
fclean:
	@rm -rf $(NAME)
re: fclean	all
