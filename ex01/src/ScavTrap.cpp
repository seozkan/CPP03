/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:57:31 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/14 11:45:30 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap class was created without a name." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap class was created with the name " << name
              << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
    *this = scavtrap;
    std::cout << "SlavTrap copied " << scavtrap._name << " constructor called!"
              << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap class instance named " << _name
              << " was destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
    if (this != &scavtrap)
    {
        this->_name = scavtrap._name;
        this->_hitPoints = scavtrap._hitPoints;
        this->_energyPoints = scavtrap._energyPoints;
        this->_attackDamage = scavtrap._attackDamage;
    }
    return (*this);
}

void ScavTrap::guardGate(void) const
{
    std::cout << _name << " gate keeper mode activ!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << _name << " ScavTrap attacks " << target << " and causes " 
            << _attackDamage << " hit points of damage." << std::endl;
        _energyPoints--;
    }
    else
        std::cout << _name << " ScavTrap can't attack. It has no hit points or energy points left." << std::endl;
}