/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:18:52 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/10 09:59:44 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    this->name = "";
    this->EnergyPoints = 10;
    this->HitPoints = 10;
    this->AttackDamage = 0;
    std::cout << "Default constructor was called on ClapTrap!!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &_name)
{
    this->name = _name;
    this->EnergyPoints = 10;
    this->HitPoints = 10;
    this->AttackDamage = 0;
    std::cout << "Default parameterized constructor was called on ClapTrap " << this->name << " !!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
    this->name = object.name;
    this->AttackDamage = object.AttackDamage;
    this->EnergyPoints = object.EnergyPoints;
    this->HitPoints = object.HitPoints;
    std::cout << "Copy constructor was called on ClapTrap " << this->name << "!!" << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &object)
{
    std::cout << "Copy assignment constructor was called on ClapTrap " << this->name << " !!" << std::endl;
    if (this != &object)
    {
        this->name = object.name;
        this->EnergyPoints = object.EnergyPoints;
        this->AttackDamage = object.AttackDamage;
        this->HitPoints = object.HitPoints; 
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor Was Called in ClapTrap" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->HitPoints > 0 && this->EnergyPoints)
    {
        this->EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " attacks ";
        std::cout << target << ", causing" << this->AttackDamage;
        std::cout << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " has not enough Hit or Energy points!";
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoints && this->EnergyPoints)
    {
        this->HitPoints += amount;
        this->EnergyPoints -= 1;
        std::cout << "ClapTarp " << this->name << " repairs itself, recovering ";
        std::cout << amount << " hit points!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " Has not enough HitPoints or EnergyPoints";
        std::cout << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints && this->EnergyPoints)
    {
        if (this->HitPoints < amount)
            this->HitPoints = 0;
        else
            this->HitPoints -= amount;
    }
    std::cout << "ClapTrap " << this->name << " received " << amount;
    std::cout << " Points f Damage!" << std::endl;
}

std::string ClapTrap::getname(void) const
{
    return (this->name);
}

int         ClapTrap::getAttackDamage(void) const
{
    return (this->AttackDamage);
}

int         ClapTrap::getEnergyPoints(void) const
{
    return (this->EnergyPoints);
}

int         ClapTrap::getHitPoints(void) const
{
    return (this->HitPoints);
}

void        ClapTrap::setname(std::string _name)
{
    this->name = _name;
}

void        ClapTrap::setAttackDamage(unsigned int value)
{
    this->AttackDamage = value;
}
void        ClapTrap::setEnergyPoints(unsigned int value)
{
    this->EnergyPoints = value;
}
void        ClapTrap::setHitPoints(unsigned int value)
{
    this->HitPoints = value;
}

void        ClapTrap::PrintStatus(void)
{
    std::cout << "=======================================================" << std::endl; 
    std::cout << "== | Current status of ClapTrap" << this->name << "| ==" << std::endl;
    std::cout << "== | Hit Points -> " << this->HitPoints << "       | ==" << std::endl; 
    std::cout << "== | Energy Points -> " << this->EnergyPoints << " | ==" << std::endl;
    std::cout << "== | Attack Damage -> " << this->AttackDamage << " | ==" << std::endl; 
    std::cout << "=======================================================" << std::endl; 
}
