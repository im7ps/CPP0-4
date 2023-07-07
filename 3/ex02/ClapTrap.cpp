/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:08:26 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/03 00:19:57 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const std::string& _name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
	this->_name = _name;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    std::cout << "Copy constructor called" << std::endl;

    this->_name = cpy._name;
    this->_hitPoints = cpy._hitPoints;
    this->_energyPoints = cpy._energyPoints;
    this->_attackDamage = cpy._attackDamage;
    return ;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

unsigned int ClapTrap::getDamage() const
{
	return this->_attackDamage;
}

unsigned int ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &source)
	{
		return *(this);
	}
	this->_name = source.getName();
	this->_hitPoints = source._hitPoints;
	this->_energyPoints = source._energyPoints;
	this->_attackDamage = source._attackDamage;
	return *(this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl; 
		this->_energyPoints--;
	}
	else
	{
		std::cout << "No more energy points left boiii" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > static_cast<unsigned int>(this->_hitPoints))
	{
		this->_hitPoints = 0;
		return ;
	}
	else
	{
		this->_hitPoints -= amount;
		if (this->_hitPoints > 0)
		{
			std::cout << "HP after battle: " << this->_hitPoints << std::endl;
		}
		else
		{
			if (this->_hitPoints == 0)
			{
				std::cout << "RIP" << std::endl;			
			}
			else
			{
				std::cout << "Please stop he's alredy dead T.T" << std::endl;
			}
		}		
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 10)
	{
		std::cout << "Alredy fullhp" << std::endl;
	}
	else
	{
		this->_hitPoints += amount;
		if (this->_hitPoints > 10)
		{
			this->_hitPoints = 10;
			std::cout << "Now fullhp" << std::endl;
		}
	}
	this->_energyPoints--;
}

