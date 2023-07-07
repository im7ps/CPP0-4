/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:08:36 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/23 18:02:56 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Inizio file harl.cpp
#include "Harl.hpp"

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

void Harl::complain(std::string level) {
	void (Harl::*harlPtr)(void) = NULL;

	if (level == "DEBUG") {
		harlPtr = &Harl::debug;
	} else if (level == "INFO") {
		harlPtr = &Harl::info;
	} else if (level == "WARNING") {
		harlPtr = &Harl::warning;
	} else if (level == "ERROR") {
		harlPtr = &Harl::error;
	} else {
		std::cout << "Invalid log level: " << level << std::endl;
		return;
	}
	(this->*harlPtr)();
}
//Fine file harl.cpp