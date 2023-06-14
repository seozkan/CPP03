/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:56:35 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/14 12:07:02 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap class was created without a name." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap class was created with the name " << name
              << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
    *this = fragtrap;
    std::cout << "FragTrap copied " << fragtrap._name << " constructor called!"
              << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "The FragTrap class instance named " << _name
              << " was destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
    if (this != &fragtrap)
    {
        this->_name = fragtrap._name;
        this->_hitPoints = fragtrap._hitPoints;
        this->_energyPoints = fragtrap._energyPoints;
        this->_attackDamage = fragtrap._attackDamage;
    }
    return (*this);
}


void	FragTrap::highFivesGuys(void) const
{
	std::cout << _name << " High Fives Guys!" << std::endl;
}
