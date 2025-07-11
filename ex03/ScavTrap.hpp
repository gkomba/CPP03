/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 06:58:28 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 18:52:58 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string _name);
        ScavTrap(const ScavTrap &object);
        ~ScavTrap(void);
        ScavTrap    &operator=(const ScavTrap &object);
        void        guardGate();
        void        attack(const std::string &target);
};

#endif