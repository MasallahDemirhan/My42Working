SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

FLAGS = c++ -Wall -Wextra -Werror -std=c++98 

NAME = fragTrap

all : $(NAME)

$(NAME) : $(SRCS)
		$(FLAGS) $(SRCS) -o $(NAME)

clean :
		rm -f $(NAME)

fclean : clean
		@echo cleaning 100%

re : fclean all
	rm -f $(NAME)

.Phony : clean fclean all re
