/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 04:01:43 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/09 05:04:31 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {

 	Zombie hershel("Hershel Greene");

	randomChump("Merle Dixon");

	Zombie *heapZombie;
	heapZombie = newZombie("Shane Walsh");
	heapZombie->announce();
	delete heapZombie; 

}