/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:46:29 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 09:42:29 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void) const {
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& name, Weapon& weapon) : m_name(name), m_weapon(weapon) {}

HumanA::~HumanA() {
    std::cout << "no more clubs for " << m_name << std::endl;
}