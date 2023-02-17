
NAME = push_swap
CC = gcc
SRCS= main.c algorithm.c push.c r_rotate.c rotate.c swap.c utils.c utils2.c



RM = rm -rf
OBJS = $(SRCS:.c=.o)

all: $(MFLAGS) $(OBJ)
	$(CC) $(SRCS) -o $(NAME)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) ./*.o

re: fclean all

re_bonus: fclean bonus

.PHONY : all fclean clean re re_bonus bonus