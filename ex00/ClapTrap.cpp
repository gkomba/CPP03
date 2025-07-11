/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:44:18 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/10 09:59:44 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "";
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "Default constructor was called!" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "Default constructor was called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& subject)
{
    this->name = subject.name;
    std::cout << "Copy constructor was called!" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& subject)
{   
    if (this != &subject)
        this->name = subject.name;
    std::cout << "Copy Assignment constructor was called!" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor was called!!" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {   
        std::cout << "ClapTrap " << this->name << " attacks " << target
            << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
        this->EnergyPoints -= 1;
    }
    else
        std::cout << "ClapTrap has not enough Energy points or Hit points\n";
    PrintStatus();
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints > 0)
    {
        if (amount > this->HitPoints)
            this->HitPoints = 0;
        else
            this->HitPoints -= amount;
    }
    std::cout << "ClapTrap " << this->name << " received " << amount << " points of damage!" << std::endl;
    PrintStatus();
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        this->EnergyPoints -= 1;
        this->HitPoints += amount;
        std::cout << "ClapTarp " << this->name << " repairs itself, recovering ";
        std::cout << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap has not enough Energy points or Hit points\n";
    PrintStatus();
}

void    ClapTrap::PrintStatus(void)
{
    std::cout << "ClapTrap -> " << this->name << std::endl;
    std::cout << "Hit Points -> " << this->HitPoints << std::endl;
    std::cout << "Energy Points -> " << this->EnergyPoints << std::endl;
    std::cout << "Attack Damage -> " << this->AttackDamage << std::endl;
}

std::string ClapTrap::getname(void) const
{
    return(this->name);
}

int ClapTrap::getEnergyPoints(void) const
{
    return(this->EnergyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
    return (this->AttackDamage);
}

void ClapTrap::Setname(const std::string _name)
{
    this->name =  _name;
}

void    ClapTrap::SetHitPoints(unsigned int value)
{
    this->HitPoints = value;
}
void    ClapTrap::SetAttackDamage(unsigned int value)
{
    this->AttackDamage = value;
}
void    ClapTrap::SetEnergyPoints(unsigned int value)
{
    this->EnergyPoints = value;
}


