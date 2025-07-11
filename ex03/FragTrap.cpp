/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 03:06:54 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 16:59:57 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->name = "";
    this->attackDamage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;
    std::cout << "Default construtor called on FragTrap!" << std::endl;
}

FragTrap::FragTrap(const std::string _name)
{
    this->name = _name;
    this->attackDamage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;
    std::cout << "Default parameterized constructor was called on FragTrap " << this->name << " !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &object) : ClapTrap(object)
{
    this->name = object.name;
    this->attackDamage = object.attackDamage;
    this->energyPoints = object.energyPoints;
    this->hitPoints = object.hitPoints;
    std::cout << "Copy constructor was called on FragTrap " << this->name << "!" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &object)
{
    const std::string old_name = this->name;
    if (this != &object)
    {
        ClapTrap::operator=(object);
    }
    std::cout << "Copy assignment constructor was called on FragTrap " << old_name << "!" << std::endl;
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "Desctructor was called on FragTrap " << this->name << "!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "Hi Everyone!" << std::endl;
}