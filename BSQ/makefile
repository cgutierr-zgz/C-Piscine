# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 13:56:38 by cgutierr          #+#    #+#              #
#    Updated: 2020/02/26 22:06:09 by cgutierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= src/main.c src/print.c src/get_tab.c src/atoi.c src/putchar.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re