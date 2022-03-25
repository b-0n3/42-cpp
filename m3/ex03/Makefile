NAME = fragTrap
SRC  = ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp

all: $(NAME)

$(NAME):
	@clang++ -Wall -Wextra -Werror $(SRC)  -o $(NAME)

clean:
	@rm -rf *.o
	@rm -rf *.h.gch
fclean: clean
	@rm -rf $(NAME)

re: fclean all