/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:20:46 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 18:48:13 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    this->name = "";
    this->hitPoints = FragTrap().getHitPoints();
    this->energyPoints = ScavTrap().getAttackDamage();
    this->attackDamage = FragTrap().getAttackDamage();
    std::cout << "Default Constructor was Called on DiamondTrap!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string _name) : ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
    this->name = _name;
    ClapTrap::name = _name + "_clap_name";
    this->hitPoints = FragTrap().getHitPoints();
    this->energyPoints = ScavTrap().getAttackDamage();
    this->attackDamage = FragTrap().getAttackDamage();
    std::cout << "Default parameterized constructor was called on DiamondTrap " << this->name << "!" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &object) :  ClapTrap(object), ScavTrap(object), FragTrap(object)
{
    std::cout << "Copy constructor was called on DiamondTrap " << this->name << "!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &object)
{
    const std::string old_name = this->name;
    if (this != &object)
    {
        ClapTrap::operator=(object);
        ScavTrap::operator=(object);
        FragTrap::operator=(object);
        this->name = object.name;
    }
    std::cout << "Copy assignment constructor was called on DiamondTrap " << old_name << "!" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Desctructor was called on DiamondTrap " << this->name << "!" << std::endl;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap name:    " << ClapTrap::name << std::endl;
}

std::string        DiamondTrap::getName(void) const
{
    return (this->name);
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}