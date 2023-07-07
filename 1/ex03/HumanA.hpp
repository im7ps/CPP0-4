/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:39:53 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 09:42:23 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA {
private:
	std::string m_name;
	Weapon& m_weapon;
public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
	void attack() const;
};
	
#endif