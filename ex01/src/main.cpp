/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:47:07 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/14 11:54:08 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int	main()
{
	ScavTrap scarface("Alias");
	
	scarface.takeDamage(25);
	scarface.guardGate();
	scarface.attack("Hermarin");
	return 0;
}