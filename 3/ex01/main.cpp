/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:52:34 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/03 00:11:32 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap sfidante1("The beast");
	ClapTrap sfidante2("The least");
	ClapTrap sfidante3("The mist");

	ScavTrap sfidante_fortissimo("Chuck Norris");

	/*sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante3.beRepaired(3);
	sfidante2.beRepaired(3);
	std::cout << "Energy points left: " << sfidante1.getEnergyPoints() << std::endl;
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	std::cout << "Energy points left: " << sfidante1.getEnergyPoints() << std::endl;*/

	std::cout << sfidante3.getHitPoints() << std::endl;
	sfidante_fortissimo.attack("The mist");
	sfidante3.takeDamage(sfidante_fortissimo.getDamage());
	std::cout << sfidante3.getHitPoints() << std::endl;
	return (0);
}