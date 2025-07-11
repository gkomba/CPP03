/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 02:10:24 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:30:30 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->name = "";
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
}

ScavTrap::ScavTrap(const std::string _name) : ClapTrap(_name)
{
    this->name = _name;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "Parameterized constructor was called on ScavTrap " << this->name << "!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object) : ClapTrap(object)
{
    std::cout << "Copy constructor was called on ScavTrap " << this->name << "!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &object)
{
    const std::string old_name = this->name;
    if (this != &object)
    {
        ClapTrap::operator=(object);
    }
    std::cout << "Copy assignment constructor was called on ScavTrap " << old_name << "!" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor Was Called in ScavTrap" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->hitPoints && this->energyPoints)
    {
        this->energyPoints -= 1;
        std::cout << "ScavTrap " << this->name << " attacks ";
        std::cout << target << ", causing" << this->attackDamage;
        std::cout << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " has not enough Hit or Energy points!";
    }
}

