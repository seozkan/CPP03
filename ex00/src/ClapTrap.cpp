/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:46:59 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/14 11:44:18 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("noname"), _hitPoints(10), _energyPoints(10),
    _attackDamage(0)
{
    std::cout << "ClapTrap class was created without a name." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPoints(10), 
    _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap class was created with the name " << name 
        << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &claptrap)
{
    *this = claptrap;
	std::cout << "ClapTrap copied " << claptrap._name << " constructor called!" 
        << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
    if (&claptrap != this)
    {
        std::cout << claptrap._name << " copied into " << this->_name 
            << std::endl;
        this->_name = claptrap._name;
        this->_hitPoints = claptrap._hitPoints;
        this->_energyPoints = claptrap._energyPoints;
        this->_attackDamage = claptrap._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "The ClapTrap class instance named " << _name 
        << " was destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << _name << " ClavTrap attacks " << target << " and causes " 
            << _attackDamage << " hit points of damage." << std::endl;
        _energyPoints--;
    }
    else
        std::cout << _name << " ClavTrap can't attack. It has no hit points or energy points left." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints)
    {
        if (amount == 0)
            return;
        if (amount >= _hitPoints)
            _hitPoints = 0;      
        else
            _hitPoints -= amount;
        std::cout << _name << " takes " << amount << " hit points of damage." << std::endl;
    }
    else
        std::cout << _name << " has no hit points left. It can't take any more damage." << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints)
    {
        if (amount == 0)
            return;
        _hitPoints += amount;
        _energyPoints--;
        std::cout << _name << " repair itself by " << amount << " amount" << std::endl;
    }
    else
        std::cout << _name << " has no energy points left. It can't repair itself." << std::endl; 
}