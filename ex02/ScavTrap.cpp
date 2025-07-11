/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 02:10:24 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/10 09:59:44 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->name = "";
    this->AttackDamage = 20;
    this->EnergyPoints = 50;
    this->HitPoints = 100;
}

ScavTrap::ScavTrap(const std::string _name) : ClapTrap(_name)
{
    this->name = _name;
    this->AttackDamage = 20;
    this->EnergyPoints = 50;
    this->HitPoints = 100;
    std::cout << "Default parameterized constructor was called on ScavTrap " << this->name << "!" << std::endl;
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
    if (this->HitPoints && this->EnergyPoints)
    {
        this->EnergyPoints -= 1;
        std::cout << "ScavTrap " << this->name << " attacks ";
        std::cout << target << ", causing" << this->AttackDamage;
        std::cout << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " has not enough Hit or Energy points!";
    }
}

