/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:48:54 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:34:48 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    Joao("Joao");
    ScavTrap    Liedson("Liedson");
    ScavTrap    Daniel;
    Daniel = Liedson;

    Daniel.guardGate();
    std::cout << Daniel.getattackDamage() << std::endl;
    std::cout << Daniel.gethitPoints() << std::endl;
    std::cout << Daniel.getenergyPoints() << std::endl;
    Daniel.attack(Joao.getname());

    std::cout << std::endl;
    std::cout << std::endl;

    ScavTrap    A("Mauro");
    ScavTrap    B("Luzingu");
    A = B;
    std::cout << A.getname() << std::endl;
    std::cout << B.getname() << std::endl;
    return (0);
}