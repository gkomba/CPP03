/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 07:11:06 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 16:14:38 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int     main(void)
{
    std::cout << "Hello World" << std::endl;

    DiamondTrap A("MAX");
    std::cout << "Name: " << A.getName() << std::endl;
    std::cout << "HitPoints: " << A.getHitPoints() << std::endl;
    std::cout << "EnergyPoints: " << A.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage: " << A.getAttackDamage() << std::endl;
    A.whoAmI();
    A.attack("Enemy");
    A.guardGate();
    A.highFivesGuys();
    return (0);
}