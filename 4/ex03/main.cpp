/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:10:48 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/17 15:56:57 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria* ice = new Ice;
	src->learnMateria(ice);
	AMateria* cure = new Cure;
	src->learnMateria(cure);
	ICharacter* me = new Character("me");
		std::cout << &me << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
		std::cout << &bob << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	delete src;
	delete bob;
	delete me;
	delete tmp;
	delete ice;
	delete cure;
	return 0;
}