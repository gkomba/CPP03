/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 01:24:58 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/10 09:59:44 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main(void)
{
    FragTrap Hugo("Ex");

    std::cout << Hugo.getname() << std::endl;
    std::cout << Hugo.getEnergyPoints() << std::endl;
    std::cout << Hugo.getHitPoints() << std::endl;
    std::cout << Hugo.getAttackDamage() << std::endl;
    Hugo.highFivesGuys();
}