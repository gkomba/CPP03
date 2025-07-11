/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:51:46 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:34:01 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    this->name = "";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Default constructor was called on ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    this->name = _name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Default Parametrer constructor was called on ClapTrap " << this->name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
    this->name = object.name;
    this->attackDamage = object.attackDamage;
    this->energyPoints = object.energyPoints;
    this->hitPoints = object.hitPoints;
    std::cout << "Copy constructor was called on ClapTrap " << this->name << "!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &object)
{
    std::cout << "Copy assignment constructor was called on ClapTrap " << this->name << "!" << std::endl;
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
    std::cout << "Desctructor was called on ClapTrap " << this->name << "!" << std::endl;   
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " << attacks";
        std::cout << target << ", causing ";
        std::cout << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " Has not enough hitPoints or energyPoints";
        std::cout << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        if (this->hitPoints < amount)
            this->hitPoints = 0;
        else
            this->hitPoints -= amount;
    }
    std::cout << "ClapTrap" << this->name << "received " << amount;
    std::cout << "Points f Damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints > 0 && this->energyPoints > 0)
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
