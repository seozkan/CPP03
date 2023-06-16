/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:56:26 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/15 20:54:26 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "../inc/ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &fragTrap);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &fragTrap);

    void highFivesGuys(void) const;
    unsigned int getHP();
    unsigned int getEP();
    unsigned int getAD();
};

#endif