/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:41:06 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/10 09:59:44 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
    protected:
        std::string         name;
        unsigned int        HitPoints;
        unsigned int        AttackDamage;
        unsigned int        EnergyPoints;
        void                PrintStatus(void);
        
    public:
        ClapTrap(void);
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap &object);
        ClapTrap    &operator=(const ClapTrap &object);
        ~ClapTrap(void);
        virtual void        attack(const std::string &target);
        virtual void        takeDamage(unsigned int amount);
        virtual void        beRepaired(unsigned int amount);
        std::string getname(void) const;
        int         getHitPoints(void) const;
        int         getAttackDamage(void) const;
        int         getEnergyPoints(void) const;
        void        setname(std::string _name);
        void        setHitPoints(unsigned int value);
        void        setAttackDamage(unsigned int value);
        void        setEnergyPoints(unsigned int value);
};

#endif