/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 07:06:17 by gkomba            #+#    #+#             */
/*   Updated: 2025/07/11 17:14:17 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <string>
class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const std::string _name);
        FragTrap(const FragTrap &object);
        FragTrap    &operator=(const FragTrap &object);
        ~FragTrap(void);
        void        highFivesGuys(void);    
};

#endif