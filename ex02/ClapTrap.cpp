/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:18:52 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:31:58 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    this->name = "";
    this->energyPoints = 10;
    this->hitPoints = 10;
    this->attackDamage = 0;
    std::cout << "Default constructor was called on ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &_name)
{
    this->name = _name;
    this->energyPoints = 10;
    this->hitPoints = 10;
    this->attackDamage = 0;
    std::cout << "Parameterized constructor was called on ClapTrap " << this->name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
    this->name = object.name;
    this->attackDamage = object.attackDamage;
    this->energyPoints = object.energyPoints;
    this->hitPoints = object.hitPoints;
    std::cout << "Copy constructor was called on ClapTrap " << this->name << "!" << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &object)
{
    std::cout << "Copy assignment constructor was called on ClapTrap " << this->name << "!" << std::endl;
    if (this != &object)
    {
        this->name = object.name;
        this->energyPoints = object.energyPoints;
        this->attackDamage = object.attackDamage;
        this->hitPoints = object.hitPoints; 
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor Was Called in ClapTrap" << this->name << "!" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->hitPoints > 0 && this->energyPoints)
    {
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " attacks ";
        std::cout << target << ", causing" << this->attackDamage;
        std::cout << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " has not enough Hit or Energy points!";
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints && this->energyPoints)
    {
        this->hitPoints += amount;
        this->energyPoints -= 1;
        std::cout << "ClapTarp " << this->name << " repairs itself, recovering ";
        std::cout << amount << " hit points!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " Has not enough hitPoints or energyPoints";
        std::cout << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints && this->energyPoints)
    {
        if (this->hitPoints < amount)
            this->hitPoints = 0;
        else
            this->hitPoints -= amount;
    }
    std::cout << "ClapTrap " << this->name << " received " << amount;
    std::cout << " Points of Damage!" << std::endl;
}

std::string ClapTrap::getname(void) const
{
    return (this->name);
}

int         ClapTrap::getattackDamage(void) const
{
    return (this->attackDamage);
}

int         ClapTrap::getenergyPoints(void) const
{
    return (this->energyPoints);
}

int         ClapTrap::gethitPoints(void) const
{
    return (this->hitPoints);
}

void        ClapTrap::setname(std::string _name)
{
    this->name = _name;
}

void        ClapTrap::setattackDamage(unsigned int value)
{
    this->attackDamage = value;
}
void        ClapTrap::setenergyPoints(unsigned int value)
{
    this->energyPoints = value;
}
void        ClapTrap::sethitPoints(unsigned int value)
{
    this->hitPoints = value;
}

void        ClapTrap::PrintStatus(void)
{
    std::cout << "=======================================================" << std::endl; 
    std::cout << "== | Current status of ClapTrap" << this->name << "| ==" << std::endl;
    std::cout << "== | Hit Points -> " << this->hitPoints << "       | ==" << std::endl; 
    std::cout << "== | Energy Points -> " << this->energyPoints << " | ==" << std::endl;
    std::cout << "== | Attack Damage -> " << this->attackDamage << " | ==" << std::endl; 
    std::cout << "=======================================================" << std::endl; 
}
