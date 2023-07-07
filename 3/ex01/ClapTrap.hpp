/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:41:08 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/03 03:36:13 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap 
{
	protected:
		std::string _name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
	public:		
		ClapTrap();
		ClapTrap(const ClapTrap &cpy);
		ClapTrap(const std::string& _name);
		ClapTrap& operator=(const ClapTrap& source);
		~ClapTrap();

		std::string getName(void) const;
		unsigned int getDamage(void) const;
		unsigned int getHitPoints(void) const;
		unsigned int getEnergyPoints(void) const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif