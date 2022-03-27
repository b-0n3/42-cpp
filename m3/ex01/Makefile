NAME = scavTrap
SRC  = ClapTrap.cpp ScavTrap.cpp main.cpp

all: $(NAME)

$(NAME):
	@clang++ -Wall -Wextra -Werror $(SRC)  -o $(NAME)

clean:
	@rm -rf *.o
fclean: clean
	@rm -rf $(NAME)

re: fclean all