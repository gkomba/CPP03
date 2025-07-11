/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 06:40:34 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 18:52:10 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
class ClapTrap
{
    protected:
        std::string     name;
        unsigned int    hitPoints;
        unsigned int    energyPoints;
        unsigned int    attackDamage;

    public:
        ClapTrap(void);
        ClapTrap(const std::string _name);
        ClapTrap(const ClapTrap &object);
        ~ClapTrap(void);
        ClapTrap            &operator=(const ClapTrap &object);
        virtual void        attack(const std::string &target);
        void                takeDamage(unsigned int amount);
        void                beRepaired(unsigned int amonut);
        std::string         getName(void) const;
        int                 getHitPoints(void) const;
        int                 getAttackDamage(void) const;
        int                 getEnergyPoints(void) const;
        virtual void        setName(std::string _name);
        void                setHitPoints(unsigned int value);
        void                setAttackDamage(unsigned int value);
        void                setEnergyPoints(unsigned int value);
};

#endif