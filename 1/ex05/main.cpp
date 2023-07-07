/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:08:42 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/30 20:44:52 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Inizio main
#include "Harl.hpp"

int main (void)
{
	Harl logger;

	logger.complain("INFO");
	logger.complain("DEBUG");
	logger.complain("WARNING");
	logger.complain("ERROR");
	return (0);
}
//Fine main
