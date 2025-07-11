/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:44:18 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:37:08 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "Default constructor was called!" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "Default constructor was called " << this->name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& subject)
{
    this->name = subject.name;
    std::cout << "Copy constructor was called " << this->name << "!" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& subject)
{   
    if (this != &subject)
        this->name = subject.name;
    std::cout << "Copy Assignment constructor was called " << this->name << "!" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor was called " << this->name << "!" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {   
        std::cout << "ClapTrap " << this->name << " attacks " << target
            << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap has not enough Energy points or Hit points\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        if (amount > this->hitPoints)
            this->hitPoints = 0;
        else
            this->hitPoints -= amount;
    }
    std::cout << "ClapTrap " << this->name << " received " << amount << " points of damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints -= 1;
        this->hitPoints += amount;
        std::cout << "ClapTarp " << this->name << " repairs itself, recovering ";
        std::cout << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap has not enough Energy points or Hit points\n";
}

std::string ClapTrap::getname(void) const
{
    return(this->name);
}

int ClapTrap::getenergyPoints(void) const
{
    return(this->energyPoints);
}

int ClapTrap::getattackDamage(void) const
{
    return (this->attackDamage);
}

void ClapTrap::Setname(const std::string _name)
{
    this->name =  _name;
}

void    ClapTrap::SethitPoints(unsigned int value)
{
    this->hitPoints = value;
}
void    ClapTrap::SetattackDamage(unsigned int value)
{
    this->attackDamage = value;
}
void    ClapTrap::SetenergyPoints(unsigned int value)
{
    this->energyPoints = value;
}


