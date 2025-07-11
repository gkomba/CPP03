/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:38:07 by gkomba            #+#    #+#             */
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
    std::cout << "Default constructor was called on ScavTrap!" << std::endl;
}
ScavTrap::ScavTrap(const std::string _name) : ClapTrap(_name)
{
    this->name = _name;
    this->AttackDamage = 20;
    this->EnergyPoints = 50;
    this->HitPoints = 100;
    std::cout << "Default Parametrer constructor was called on ScavTrap " << this->name << " !!" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &subject) : ClapTrap(subject)
{
    std::cout << "Copy constructor was called on ScavTrap " << this->name << " !!" << std::endl;
}
ScavTrap   &ScavTrap::operator=(const ScavTrap &subject)
{
    const std::string old_name = this->name;
    if (this != &subject)
    {
        ClapTrap::operator=(subject);
    }
    std::cout << "Copy assignment constructor was called on ScavTrap " << old_name << " !!" << std::endl;
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
    if (this->HitPoints > 0 && this->EnergyPoints > 0)
    {
        std::cout << "ScavTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << ", causing " << this->AttackDamage << " points of Damage!";
        std::cout << std::endl;
        this->EnergyPoints -= 1;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " Has not enough Hit or Energy points";
        std::cout << std::endl;
    }
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoints && this->EnergyPoints)
    {
        this->HitPoints -= amount;
        this->EnergyPoints -= 1;
        std::cout << "ClapTarp " << this->name << " repairs itself, recovering ";
        std::cout << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " has not enough Energy points or Hit points\n";
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints > 0)
    {
        if (this->HitPoints < amount)
            this->HitPoints = 0;
        else
            this->HitPoints -= amount;
        std::cout << "ClapTrap " << this->name << " received " << amount << " points of damage!" << std::endl;
    }
}