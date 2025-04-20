/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:33:57 by gkomba            #+#    #+#             */
/*   Updated: 2025/04/19 12:34:29 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap joao("João");
    joao.attack("Alvo");
    joao.beRepaired(5);
    joao.takeDamage(3);
    int	i;
    while (i++ < 10)
    {
    	joao.attack("Inimigo");
    }
    joao.attack("Inimigo Sem Energia");
    joao.takeDamage(20);
    joao.beRepaired(5);
    joao.attack("Inimigo Final");
    return 0;
}