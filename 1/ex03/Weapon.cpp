/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:24:08 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 09:36:47 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() const
{
	return (m_type);
}

void Weapon::setType(const std::string& type)
{
	m_type = type;
	return ;
}

Weapon::Weapon(const std::string& type) : m_type(type) {}

Weapon::~Weapon()
{
	std::cout << "Weapon deconstructed" << std::endl;
}