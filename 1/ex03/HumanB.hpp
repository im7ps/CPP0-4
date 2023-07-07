/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 09:42:55 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 09:45:28 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB {
private:
	std::string m_name;
	Weapon* m_weapon;
public:
	HumanB(const std::string& name);
	void setWeapon(Weapon &weapon);
	void attack() const;
};

#endif