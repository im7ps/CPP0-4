/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:08:36 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/01 18:35:50 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Inizio file harl.cpp
#include "Harl.hpp"

Harl::Harl()
{
	;
}

Harl::~Harl()
{
	;
}

void Harl::debug(void) {
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::shadowswitch(int n)
{
	void (Harl::*complain[4])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	while (n < 4)
	{
		(this->*complain[n])();
		n++;
	}
}

void Harl::complain(std::string level) {
	std::string shadow_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int a;
	int i;

	i = 0;
	a = -1;
	while (i < 4)
	{
		if (level == shadow_levels[i])
		{
			a = i;
			break;
		}
		i++;
	}
	switch (a)
	{
		case 0:
			this->shadowswitch(0);
			break;
		case 1:
			this->shadowswitch(1);
			break;
		case 2:
			this->shadowswitch(2);
			break;
		case 3:
			this->shadowswitch(3);
			break;
		default:
			break;
	}
}
//Fine file harl.cpp