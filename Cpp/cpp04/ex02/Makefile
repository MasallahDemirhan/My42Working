SRCS = main.cpp Animal.cpp WrongAnimal.cpp Cat.cpp Dog.cpp WrongCat.cpp Brain.cpp

FLAGS = c++ -Wall -Wextra -Werror -std=c++98 

NAME = animals

all : $(NAME)

$(NAME) : $(SRCS)
		$(FLAGS) $(SRCS) -o $(NAME)

clean :
		rm -f $(NAME)

fclean : clean
		@echo cleaning 100%

re : fclean all

.Phony : clean fclean all re