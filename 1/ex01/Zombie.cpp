/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 05:18:28 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 05:20:21 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setZombieName(std::string zombieName) {
	m_name = zombieName;
}

std::string Zombie::getZombieName() const {
	return m_name;
}

void Zombie::announce(void) {
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
    setZombieName(name);
    announce();
}

Zombie::~Zombie() {
    std::cout << m_name << " has been headshotted clutched no look" << std::endl;
}
