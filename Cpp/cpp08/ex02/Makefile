SRCS	= main.cpp

OTHERS	= MutantStack.hpp Makefile

C++		= c++ -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

NAME	= mutant

all: $(NAME)

$(NAME): $(SRCS) $(OTHERS)
	$(C++) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean
	make

.PHONY: all clean fclean re
