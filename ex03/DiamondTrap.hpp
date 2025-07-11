/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 07:52:16 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 16:10:01 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    
    public:
        DiamondTrap(void);
        DiamondTrap(const std::string _name);
        DiamondTrap(const DiamondTrap &object);
        DiamondTrap &operator=(const DiamondTrap &object);
        ~DiamondTrap(void);
        using   ScavTrap::attack;
        void    whoAmI();
        std::string  getName(void) const;
};

#endif