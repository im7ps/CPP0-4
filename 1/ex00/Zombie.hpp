/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 03:13:25 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 05:20:50 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Zombie {
private:
	std::string m_name;

public:
	Zombie() {}
	Zombie(std::string name);
	~Zombie();

	void announce(void);
	std::string getZombieName() const;
	void setZombieName(std::string zombieName);
};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif