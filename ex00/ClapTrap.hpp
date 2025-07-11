/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:38:14 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 18:51:34 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& subject);
        ~ClapTrap();
        ClapTrap    &operator=(const ClapTrap& subject);
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        std::string getname(void) const;
        int         gethitPoints(void) const;
        int         getattackDamage(void) const;
        int         getenergyPoints(void) const;
        void        Setname(const std::string _name);
        void        SethitPoints(unsigned int value);
        void        SetattackDamage(unsigned int value);
        void        SetenergyPoints(unsigned int value);
};

#endif