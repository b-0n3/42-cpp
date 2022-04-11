# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 16:41:02 by aait-ham          #+#    #+#              #
#    Updated: 2022/04/03 16:41:03 by aait-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
SRC  = Fixed.cpp main.cpp

all: $(NAME)

$(NAME):
	@c++ --std=c++98 -Wall -Wextra -Werror $(SRC)  -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
