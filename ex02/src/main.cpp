/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:47:07 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/14 12:09:37 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

int	main()
{
	FragTrap frager("Himia");
	
	frager.takeDamage(15);
	frager.beRepaired(10);
	frager.attack("Alias");
	frager.highFivesGuys();
	return 0;
}