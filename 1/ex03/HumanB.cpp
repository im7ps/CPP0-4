/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 09:45:36 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 09:58:31 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string& name) : m_name(name), m_weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}

void HumanB::attack() const {
	if (m_weapon)
	{
		std::cout << m_name << " is attacking with " << m_weapon->getType() << std::endl;
	}
	else 
	{
		std::cout << m_name << " punches really hard tho" << std::endl;
	}
}