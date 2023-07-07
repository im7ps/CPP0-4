/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:46:06 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/03 02:59:33 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap is here!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
	std::cout << "Scopy constructor called" << std::endl;

	return ;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "ScavTrap is ready to fffffight!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return ;
}


ScavTrap& ScavTrap::operator=(const ScavTrap& source)
{
	if (this == &source)
	{
		return *(this);
	}
	ClapTrap::operator=(source);
	return *(this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap is going to Belize" << std::endl;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ScavTrap in azioneee " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl; 
		this->_energyPoints--;
	}
	else
	{
		std::cout << "No more energy points left boiii" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout <<  "ScavTrap is now in Gate keeper mode." << std::endl;
}
