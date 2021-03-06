# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 15:57:25 by jbenjy            #+#    #+#              #
#    Updated: 2022/02/10 16:45:06 by jbenjy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			=	laba1

CFLAGS			=	-Wall -Wextra -Werror -g

HEAD			=	includes/*.hpp

INCLUDES		= 	-I./includes/ 

SRCS			=	srcs/main.cpp \
					srcs/first_task.cpp \
					srcs/second_task.cpp \
					srcs/utils.cpp \
					
OBJS			=	$(SRCS:.cpp=.o)

OBJS_LIB		=	${addprefix ./libft/, *.c}
L_LIBFT			=  ./libft/libft.a


GREEN			=	\033[0;32m
YELLOW			=	\033[0;33m

CC				=	clang++

WORD_COMPILING	=	░█████╗░░█████╗░███╗░░░███╗██████╗░██╗██╗░░░░░██╗███╗░░██╗░██████╗░░░░░░░░░░\n\
					██╔══██╗██╔══██╗████╗░████║██╔══██╗██║██║░░░░░██║████╗░██║██╔════╝░░░░░░░░░░\n\
					██║░░╚═╝██║░░██║██╔████╔██║██████╔╝██║██║░░░░░██║██╔██╗██║██║░░██╗░░░░░░░░░░\n\
					██║░░██╗██║░░██║██║╚██╔╝██║██╔═══╝░██║██║░░░░░██║██║╚████║██║░░╚██╗░░░░░░░░░\n\
					╚█████╔╝╚█████╔╝██║░╚═╝░██║██║░░░░░██║███████╗██║██║░╚███║╚██████╔╝██╗██╗██╗\n\
					░╚════╝░░╚════╝░╚═╝░░░░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝╚═╝╚═╝\n

WORD_SUCCESS	=	░██████╗██╗░░░██╗░█████╗░░█████╗░███████╗░██████╗░██████╗██╗\n\
					██╔════╝██║░░░██║██╔══██╗██╔══██╗██╔════╝██╔════╝██╔════╝██║\n\
					╚█████╗░██║░░░██║██║░░╚═╝██║░░╚═╝█████╗░░╚█████╗░╚█████╗░██║\n\
					░╚═══██╗██║░░░██║██║░░██╗██║░░██╗██╔══╝░░░╚═══██╗░╚═══██╗╚═╝\n\
					██████╔╝╚██████╔╝╚█████╔╝╚█████╔╝███████╗██████╔╝██████╔╝██╗\n\
					╚═════╝░░╚═════╝░░╚════╝░░╚════╝░╚══════╝╚═════╝░╚═════╝░╚═╝\n

WORD_CLEANING	=	░█████╗░██╗░░░░░███████╗░█████╗░███╗░░██╗██╗███╗░░██╗░██████╗░░░░░░░░░░\n\
					██╔══██╗██║░░░░░██╔════╝██╔══██╗████╗░██║██║████╗░██║██╔════╝░░░░░░░░░░\n\
					██║░░╚═╝██║░░░░░█████╗░░███████║██╔██╗██║██║██╔██╗██║██║░░██╗░░░░░░░░░░\n\
					██║░░██╗██║░░░░░██╔══╝░░██╔══██║██║╚████║██║██║╚████║██║░░╚██╗░░░░░░░░░\n\
					╚█████╔╝███████╗███████╗██║░░██║██║░╚███║██║██║░╚███║╚██████╔╝██╗██╗██╗\n\
					░╚════╝░╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚══╝╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝╚═╝╚═╝\n

WORD_FCLEANING	=	███████╗░█████╗░██╗░░░░░███████╗░█████╗░███╗░░██╗██╗███╗░░██╗░██████╗░░░░░░░░░░\n\
					██╔════╝██╔══██╗██║░░░░░██╔════╝██╔══██╗████╗░██║██║████╗░██║██╔════╝░░░░░░░░░░\n\
					█████╗░░██║░░╚═╝██║░░░░░█████╗░░███████║██╔██╗██║██║██╔██╗██║██║░░██╗░░░░░░░░░░\n\
					██╔══╝░░██║░░██╗██║░░░░░██╔══╝░░██╔══██║██║╚████║██║██║╚████║██║░░╚██╗░░░░░░░░░\n\
					██║░░░░░╚█████╔╝███████╗███████╗██║░░██║██║░╚███║██║██║░╚███║╚██████╔╝██╗██╗██╗\n\
					╚═╝░░░░░░╚════╝░╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚══╝╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝╚═╝╚═╝\n

.c.o:
		@${CC} ${CFLAGS} ${INCLUDES} -c -o $@ $^

$(NAME): ${OBJS} ${HEAD}
		@echo "${YELLOW} ${WORD_COMPILING}${NORMAL}"
		@$(CC) $(CFLAGS) ${INCLUDES} $(SRCS) -o $@
		@echo "${GREEN} ${WORD_SUCCESS}${NORMAL}"

all:	${NAME}

clean:
		@echo "${YELLOW} ${WORD_CLEANING}${NORMAL}"
		@rm -f $(OBJS)
		@echo "${GREEN} ${WORD_SUCCESS}${NORMAL}"
		
fclean:	
		@echo "${YELLOW} ${WORD_FCLEANING}${NORMAL}"
		@rm -f $(OBJS)
		@rm -f ${NAME}
		@echo "${GREEN} ${WORD_SUCCESS}${NORMAL}"

re:		fclean all