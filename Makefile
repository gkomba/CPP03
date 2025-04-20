NAME=claptrap
SRC=main.cpp\
	ClapTrap.cpp\

OBJ=${SRC:.cpp=.o}
CXX=c++
CXXFLAGS=-std=c++98
FLAGS=-Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${FLAGS} -o ${NAME} ${OBJ}

clean: 
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
