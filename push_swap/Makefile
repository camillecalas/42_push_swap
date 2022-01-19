NAME =	push_swap

CC =	gcc

LINKER =	ar rcs

RM =	rm -rf

SRCS =	utils/ft_atoi.c\
		utils/ft_isdigit.c\
		utils/ft_split.c\
		utils/ft_putstr_fd.c\
		operations/rotate.c\
		operations/rotate2.c\
		operations/swap.c\
		operations/push.c\
		main.c\
		push_swap.c\
		push_swap2.c\
		value_main.c\
		sort.c\
		sort_main.c\
		index.c\
		check_list.c\

OBJS =	${SRCS:.c=.o}

CFLAGS =	-Wall -Wextra -Werror -fsanitize=address

$(NAME): ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:    fclean all

.PHONY:	all clean fclean re
