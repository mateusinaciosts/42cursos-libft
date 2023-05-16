# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 10:36:18 by matsanto          #+#    #+#              #
#    Updated: 2023/05/16 19:07:20 by matsanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./libft.h

OPTION = -I ${HEADER} -c 

FLAGS = -Wall -Werror -Wextra

SOURCES			= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
					ft_memcpy.c ft_memmove.c ft_memset.c ft_strnstr.c ft_strchr.c\
					ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
					ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c\
					ft_strtrim.c ft_itoa.c
						

OBJ = $(SOURCES:%.c=%.o)

all: fclean	${NAME}
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


