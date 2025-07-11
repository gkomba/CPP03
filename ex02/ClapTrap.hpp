/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:29:21 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:13:37 by gkomba           ###   ########.fr       */
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
        void            PrintStatus(void);
    
    public:
        ClapTrap(void);
        ClapTrap(const std::string &_name);
        ClapTrap(const ClapTrap &object);
        ClapTrap    &operator=(const ClapTrap &object);
        ~ClapTrap(void);
        virtual void        attack(const std::string& target);
        virtual void        takeDamage(unsigned int amount);
        virtual void        beRepaired(unsigned int amount); 
        std::string         getname(void) const;
        int                 gethitPoints(void) const;
        int                 getattackDamage(void) const;
        int                 getenergyPoints(void) const;
        void                setname(std::string _name);
        void                sethitPoints(unsigned int value);
        void                setattackDamage(unsigned int value);
        void                setenergyPoints(unsigned int value);
};

#endif