/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:38:14 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/10 09:59:44 by gkomba           ###   ########.fr       */
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
        int         HitPoints;
        int         EnergyPoints;
        int         AttackDamage;
        void        PrintStatus(void);
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& subject);
        ClapTrap    &operator=(const ClapTrap& subject);
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        std::string getname(void) const;
        int         getHitPoints(void) const;
        int         getAttackDamage(void) const;
        int         getEnergyPoints(void) const;
        
        void Setname(const std::string _name);
        void         SetHitPoints(unsigned int value);
        void         SetAttackDamage(unsigned int value);
        void         SetEnergyPoints(unsigned int value);
        ~ClapTrap();
};

#endif