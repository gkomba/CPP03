/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 06:40:26 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:01:59 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    this->name = "";
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
    std::cout << "Default constructor was called on Claptrap!!" << std::endl;
}

ClapTrap::ClapTrap(const std::string _name)
{
    this->name = _name;
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
    std::cout << "Default parametizader constructor was called on Claptrap " << this->name << "!!" << std::endl;    
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
    this->name = object.name;
    this->attackDamage = object.attackDamage;
    this->energyPoints = object.energyPoints;
    this->hitPoints = object.hitPoints;
    std::cout << "Copy constructor was called on Claptrap " << this->name << "!!" << std::endl;    
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &object)
{
    std::cout << "Copy assignment was called on Claptrap " << this->name << "!!" << std::endl;    
    if (this != &object)
    {
        this->name = object.name;
        this->attackDamage = object.attackDamage;
        this->energyPoints = object.energyPoints;
        this->hitPoints = object.hitPoints;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor was called on ClapTrap " << this->name << std::endl; 
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
    std::cout << " Points f Damage!" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (this->name);
}

int         ClapTrap::getAttackDamage(void) const
{
    return (this->attackDamage);
}

int         ClapTrap::getEnergyPoints(void) const
{
    return (this->energyPoints);
}

int         ClapTrap::getHitPoints(void) const
{
    return (this->hitPoints);
}

void        ClapTrap::setName(std::string _name)
{
    this->name = _name;
}

void        ClapTrap::setAttackDamage(unsigned int value)
{
    this->attackDamage = value;
}
void        ClapTrap::setEnergyPoints(unsigned int value)
{
    this->energyPoints = value;
}
void        ClapTrap::setHitPoints(unsigned int value)
{
    this->hitPoints = value;
}