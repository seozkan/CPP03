/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:11:58 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/15 20:55:09 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	ClapTrap::_name = _name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap class was created without a name." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
	*this = diamondtrap;
	std::cout << "DiamondTrap copied " << diamondtrap._name << " constructor called!"
              << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap class was created with the name " << name
              << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "The DiamondTrap class instance named " << _name
			<< " was destroyed" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	if (this != &diamondTrap)
	{
		this->_name = diamondTrap._name;
		this->_hitPoints = diamondTrap._hitPoints;
		this->_energyPoints = diamondTrap._energyPoints;
		this->_attackDamage = diamondTrap._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << _name << " and my clapName " << ClapTrap::_name << "!" << std::endl;
}

unsigned int DiamondTrap::getHP()
{
	return this->_hitPoints;
}

unsigned int DiamondTrap::getAD()
{
	return this->_attackDamage;
}

unsigned int  DiamondTrap::getEP()
{
	return this->_energyPoints;
}