/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 01:29:55 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 18:51:58 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
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