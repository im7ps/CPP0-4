/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:12:33 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/03 01:13:20 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const FragTrap &cpy);
		FragTrap(const std::string& _name);
		~FragTrap();
		FragTrap& operator=(const FragTrap& source);

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif