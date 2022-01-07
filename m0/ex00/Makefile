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