name=claptrap
OBJ=main.o ClapTrap.o
CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98

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