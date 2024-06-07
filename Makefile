SRC 			= stack_actions.c sort_large_utils.c sort_large.c sort.c parsing.c move_swap.c error.c libft_utils_2.c \
    			  libft_utils.c move_push.c move_rotate.c move_rrotate.c sort_large_utils_2.c
MAIN			= ./src/main.c
SRCS_DIR 		= ./src/
SRCS 			= $(addprefix $(SRCS_DIR), $(SRC))

OBJS			=  ${SRCS:.c=.o}
MAIN_OBJS		=  ${MAIN:.c=.o}

CHECKER_SRC		= checker.c get_next_line.c get_next_line_utils.c
CHECKER_DIR		= ./checker_folder/
CHECKER			= $(addprefix $(CHECKER_DIR), $(CHECKER_SRC))
CHECKER_OBJS	=  ${CHECKER:.c=.o}
NAME_CHECKER	= ./checker

NAME = push_swap

all : ${NAME}

.c.o:
	cc -Wall -Wextra -Werror -I ./include/ -c $< -o ${<:.c=.o}

${NAME} : $(OBJS) $(MAIN_OBJS)
	cc -Wall -Wextra -Werror -o ${NAME} $(OBJS) $(MAIN_OBJS)

bonus : $(OBJS) $(CHECKER_OBJS)
	cc -Wall -Wextra -Werror -I ./include/ $(OBJS) $(CHECKER_OBJS) -o $(NAME_CHECKER)

clean :
	rm -f ${OBJS} $(CHECKER_OBJS) $(MAIN_OBJS)

fclean : clean
	rm -f ${NAME} $(NAME_CHECKER)

re : fclean all

.PHONY: all bonus clean fclean re