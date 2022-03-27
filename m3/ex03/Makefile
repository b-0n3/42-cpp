NAME = diamondTrap
SRC  = ClapTrap.cpp DiamondTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp

all: $(NAME)

$(NAME):
	@clang++  --std=c++98 -Wall -Wextra -Werror $(SRC)  -o $(NAME)

clean:
	@rm -rf *.o
fclean: clean
	@rm -rf $(NAME)

re: fclean all