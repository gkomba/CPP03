/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:38:07 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 18:49:41 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->name = "";
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "Default constructor was called on ScavTrap!" << std::endl;
}
ScavTrap::ScavTrap(const std::string _name) : ClapTrap(_name)
{
    this->name = _name;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "Default Parametrer constructor was called on ScavTrap " << this->name << "!" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &subject) : ClapTrap(subject)
{
    std::cout << "Copy constructor was called on ScavTrap " << this->name << "!" << std::endl;
}
ScavTrap   &ScavTrap::operator=(const ScavTrap &subject)
{
    const std::string old_name = this->name;
    if (this != &subject)
    {
        ClapTrap::operator=(subject);
    }
    std::cout << "Copy assignment constructor was called on ScavTrap " << old_name << "!" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor was called on ScavTrap!" << std::endl;
}
void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getname() << " is now in Gate keeper mode.";
    std::cout << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->hitPoints > 0 && this->energyPoints > 0)
    {
        std::cout << "ScavTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << ", causing " << this->attackDamage << " points of Damage!";
        std::cout << std::endl;
        this->energyPoints -= 1;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " Has not enough Hit or Energy points";
        std::cout << std::endl;
    }
}