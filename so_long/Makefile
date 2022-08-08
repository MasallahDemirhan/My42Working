NAME = so_long
SRCS = so_long.c so_long2.c so_long_main.c  controls.c controls_other.c put_image.c 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -sC libft
	make -sC minilibx
	gcc -Wall -Wextra -Werror *.o  -framework OpenGL -framework AppKit minilibx/libmlx.a -I minilibx get_next_line/*.c libft/*.c -o $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -o $@	 -c $<

clean:
	make clean -sC libft
	make clean -sC minilibx
	rm -rf $(OBJS)

fclean: clean
	make fclean -sC libft
	rm -rf $(NAME)

re:	fclean all

.PHONY : clean fclean re all


