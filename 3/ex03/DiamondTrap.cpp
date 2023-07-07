/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 03:07:05 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/04 19:53:50 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Diamond is unbreakable" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + " deClapis"), ScavTrap(name), FragTrap(name)
{
    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap is unbreakable" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy)
{
    _name = cpy._name;
    std::cout << "You can't copy a real diamond but nice try" << std::endl;
}

DiamondTrap::~DiamondTrap() 
{
    std::cout << "Destroy a diamond?are. you. crazy???" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& source) 
{
    if (this != &source) 
	{
        ClapTrap::operator=(source);
        FragTrap::operator=(source);
        ScavTrap::operator=(source);
        _name = source._name;
    }
    std::cout << "Only a diamond can be equal to a diamond~" << std::endl;
    return *(this);
}

void DiamondTrap::whoAmI() 
{
    std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}



