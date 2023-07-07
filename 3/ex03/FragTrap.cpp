/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:14:13 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/03 01:17:33 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap is fragging everywhere" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
	std::cout << "Fraggy constructor called" << std::endl;

	return ;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap is ready to break bad" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return ;
}


FragTrap& FragTrap::operator=(const FragTrap& source)
{
	if (this == &source)
	{
		return *(this);
	}
	ClapTrap::operator=(source);
	return *(this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap is going to San Junipero" << std::endl;
	return ;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "FragTrap fraggando " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl; 
		this->_energyPoints--;
	}
	else
	{
		std::cout << "No frag for the trap" << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout <<  "Let's have five. Five high. Five low...to slow!" << std::endl;
}
