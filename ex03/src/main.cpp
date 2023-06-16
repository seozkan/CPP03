/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:47:07 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/16 10:15:13 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int	main()
{
	DiamondTrap trap("Alias");

	std::cout << "My hit point is " << trap.getHP() << std::endl;
	std::cout << "My energy point is " << trap.getEP() << std::endl;
	std::cout << "My attack damage is " << trap.getAD() << std::endl;
	trap.whoAmI();
	trap.guardGate();
	trap.highFivesGuys();
	return 0;
}