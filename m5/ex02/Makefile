NAME = forms
SRC  = Bureaucrat.cpp  PresidentialPardonForm.cpp   \
 RobotomyRequestForm.cpp         ShrubberyCreationForm.cpp  \
  Form.cpp main.cpp

all: $(NAME)

$(NAME):
	@c++ -Wall -Wextra -Werror $(SRC)  -o $(NAME)

clean:
	@rm -rf *.o
fclean: clean
	@rm -rf $(NAME)

re: fclean all