/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:52:34 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/02 18:42:44 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap sfidante1("The beast");
	ClapTrap sfidante2("The least");
	ClapTrap sfidante3("The mist");

	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante3.beRepaired(3);
	sfidante2.beRepaired(3);
	std::cout << "Energy points left: " << sfidante1.getEnergyPoints() << std::endl;
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	sfidante1.attack("The least");
	sfidante2.takeDamage(sfidante1.getDamage());
	std::cout << "Energy points left: " << sfidante1.getEnergyPoints() << std::endl;
	
	return (0);
}