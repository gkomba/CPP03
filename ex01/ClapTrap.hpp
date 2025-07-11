/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:41:06 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 18:50:33 by gkomba           ###   ########.fr       */
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
        unsigned int        hitPoints;
        unsigned int        attackDamage;
        unsigned int        energyPoints;
        
    public:
        ClapTrap(void);
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap &object);
        ClapTrap    &operator=(const ClapTrap &object);
        ~ClapTrap(void);
        virtual void    attack(const std::string &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        std::string     getname(void) const;
        int             gethitPoints(void) const;
        int             getattackDamage(void) const;
        int             getenergyPoints(void) const;
        void            setname(std::string _name);
        void            sethitPoints(unsigned int value);
        void            setattackDamage(unsigned int value);
        void            setenergyPoints(unsigned int value);
};

#endif