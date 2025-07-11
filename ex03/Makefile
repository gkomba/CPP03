name=DiamondTrap
OBJ= main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o
HEADERS=ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -Wshadow -std=c++98
RM=rm -rf


all: ${name}

${OBJ}: ${HEADERS}

${name}: ${OBJ}
	${CXX} ${CXXFLAGS} -o ${name} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${name}

re: fclean all

.PHONY:all clean fclean re