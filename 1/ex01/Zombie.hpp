/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 05:08:19 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 08:21:48 by sgerace          ###   ########.fr       */
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
	Zombie (std::string name);
	~Zombie();

	void setZombieName(std::string name);
	std::string getZombieName() const;
	void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif