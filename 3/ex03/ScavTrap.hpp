/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:46:09 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/03 03:41:12 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(const ScavTrap &cpy);
		ScavTrap(const std::string& _name);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& source);

		void attack(const std::string& target);
		void guardGate();
};

#endif