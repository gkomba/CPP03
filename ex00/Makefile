name=claptrap
OBJ=main.o ClapTrap.o
CXX=c++
FLAGS=-Wall -Wextra -Werror -std=c++98

all: ${name}

${OBJ}: ClapTrap.hpp

${name}: ${OBJ}
	${CXX} ${CXXFLAGS} ${FLAGS} -o ${name} ${OBJ}

clean: 
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${name}

re: fclean all

.PHONY: all clean fclean re