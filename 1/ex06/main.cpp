/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:49:31 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/01 18:38:07 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Inizio main
#include "Harl.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " <string>" << std::endl;
		return (1);
	}
	Harl user;

	user.complain(argv[1]);
	return (0);
}
//Fine main