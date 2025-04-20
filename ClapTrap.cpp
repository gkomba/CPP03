/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:47:04 by gkomba            #+#    #+#             */
/*   Updated: 2025/04/20 08:55:37 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called!" << std::endl;
    this->name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& object)
{
    std::cout << "Copy constrctor called!" << std::endl;
    *this = object;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& object)
{
    std::cout << "Operator contructor called!" << std::endl;
    if (this != &object)
        *this = object;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
    {
        this->Energy_points--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", ";
        std::cout << "causing " << this->Attack_damage  <<" points of damage!";
        std::cout << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " can’t do anything because has no hit points and energy points left!";
        std::cout << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount << " of damage!";
    std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->Hit_points += amount;
    this->Energy_points--;
    std::cout << "ClapTarp " << this->name << " repairs itself, recovering ";
    std::cout << amount << " hit points!";
    std::cout << std::endl;
}

ClapTrap::~ClapTrap()
{
    // std::cout << this->Hit_points << std::endl;
    // std::cout << this->Energy_points << std::endl;
    std::cout << "Destructor called!" << std::endl;
}