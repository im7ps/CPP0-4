/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:31:28 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/17 14:26:35 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main() 
{ 
	const Animal* meta = new Animal(); 
 	const Animal* j = new Dog(); 
	const Animal* i = new Cat(); 
	std::cout << j->getType() << "" << std::endl; 
	std::cout << i->getType() << "" << std::endl; 
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	return 0;
}