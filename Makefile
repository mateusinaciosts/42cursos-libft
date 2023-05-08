# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 10:36:18 by matsanto          #+#    #+#              #
#    Updated: 2023/05/08 11:46:30 by matsanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./libft.h

OPTION = -I ${HEADER} -c 

FLAGS = -Wall -Werror -Wextra

SOURCES			= 	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
					ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c\
					ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strrchr.c ft_tolower.c\
					ft_toupper.c 
						

OBJ = $(SOURCES:%.c=%.o)

all:	${NAME}
${NAME}:
	cc ${FLAGS} ${OPTION} ${SOURCES}
	ar rc ${NAME} ${OBJ}

objs/%.o:               srcs/%.c
	cc $(FLAGS) -I ./libft.h -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean clean all



