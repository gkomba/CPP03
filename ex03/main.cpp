/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 07:11:06 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:35:44 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int     main(void)
{
    DiamondTrap A("gkomba");
    std::cout << "Name: " << A.getName() << std::endl;
    std::cout << "hitPoints: " << A.getHitPoints() << std::endl;
    std::cout << "energyPoints: " << A.getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << A.getAttackDamage() << std::endl;
    A.whoAmI();
    A.attack("Enemy");
    A.guardGate();
    A.highFivesGuys();
    return (0);
}