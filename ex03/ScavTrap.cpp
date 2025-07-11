/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 07:02:06 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 16:59:57 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
}

ScavTrap::ScavTrap(const std::string _name)
{
    this->name = _name;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "Default parameterized constructor was called on ScavTrap " << this->name << "!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object) : ClapTrap(object)
{
    this->name = object.name;
    this->attackDamage = object.attackDamage;
    this->energyPoints = object.energyPoints;
    this->hitPoints = object.hitPoints;
    std::cout << "Copy constructor was called on ScavTrap " << this->name << "!" << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &object)
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
    std::cout << "Destructor was called on ScavTrap " << this->name << "!" << std::endl; 
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->hitPoints && this->energyPoints)
    {
        this->energyPoints -= 1;
        std::cout << "ScavTrap " << this->name << " attacks ";
        std::cout << target << ", causing " << this->attackDamage;
        std::cout << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " has not enough Hit or Energy points!";
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl;
}
