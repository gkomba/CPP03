/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:57:29 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:35:02 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Anderson("OLA");
    ClapTrap Kupesa("MUNDO");
    ClapTrap Gildo = Anderson;
    Gildo = Kupesa;

    Anderson.attack(Kupesa.getname());
    Kupesa.takeDamage(2);
    
    Anderson.attack(Kupesa.getname());
    Kupesa.takeDamage(3);

    Anderson.attack(Kupesa.getname());
    Kupesa.takeDamage(1);
    
    Anderson.attack(Kupesa.getname());
    Kupesa.takeDamage(1);

    Kupesa.beRepaired(5);

    std::cout << "olamundo" << std::endl;
    return (0);
}