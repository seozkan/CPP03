/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:11:53 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/15 20:54:02 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
	DiamondTrap(void);
	DiamondTrap(const DiamondTrap &diamondTrap);
	DiamondTrap(std::string name);
	~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &diamondTrap);

	void whoAmI(void) const;
	using ScavTrap::attack;
	unsigned int getHP();
	unsigned int getEP();
	unsigned int getAD();
};

#endif