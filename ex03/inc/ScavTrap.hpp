/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:57:22 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/15 20:54:31 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "../inc/ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scavTrap);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &scavtrap);
    void guardGate() const;
    void attack(const std::string &target);
    unsigned int getHP();
    unsigned int getEP();
    unsigned int getAD();
};
#endif