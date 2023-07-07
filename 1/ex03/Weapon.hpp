/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:19:38 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 09:37:55 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Weapon {
private:
	std::string m_type;
public:
	Weapon() {}
	Weapon(const std::string& type);
	~Weapon();
	const std::string& getType() const;
	void setType(const std::string& type);
};

#endif