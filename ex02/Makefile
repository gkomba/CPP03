name=fragtrap
OBJ=main.o ClapTrap.o ScavTrap.o FragTrap.o
HEADERS=ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
RM= rm -f


all: ${name}

${OBJ}: ${HEADERS}

${name}: ${OBJ}
	${CXX} ${CXXFLAGS} -o ${name} ${OBJ}

clean: 
	${RM} ${OBJ}

fclean: clean
	${RM} ${name}

re: fclean all

.PHONY: all fclean clean re