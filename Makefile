NAME = libft.a

OPTION = -c 

HEADER = ./includes/libft.h

FLAGS = -Wall -Werror -Wextra

PATH_SRC = ./srcs

SRC = 

OBJ = 

all: ${NAME}
${NAME}
	gcc ${FLAGS} ${OPTION} ${PATH_SRC}
	ar rc ${NAME} ${OBJ}



