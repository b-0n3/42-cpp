NAME=zombie


all: $(NAME)


$(NAME):
	clang++  -Wall -Wextra -Werror main.cpp Zombie.cpp randomChump.cpp newZombie.cpp -o $(NAME)

test: $(NAME)
	./zombie