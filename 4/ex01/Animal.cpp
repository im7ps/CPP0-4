/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:31:24 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/07 20:54:28 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal without type as been created" << std::endl;
	return ;
}

Animal::Animal(const std::string& type) : _type(type)
{
	std::cout << "A new creature has born!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::setType(const std::string& type)
{
	this->_type = type;
	return ;
}

Animal::Animal(const Animal& cpy)
{
	this->_type = cpy.getType();
	return ;
}

Animal::~Animal()
{
	std::cout << "Destroyeeeeeeeerr" << std::endl;
}

	Animal& Animal::operator=(const Animal& source)
	{
		if (this != &source)
		{
			this->_type = source.getType();
		}
		return *this;
	}

void Animal::makeSound() const
{
	std::cout << "animal sound" << std::endl;
}

/******************************************************/

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "a dog is born today" << std::endl;
	return ;
}

Dog::Dog(const Dog& cpy) : Animal(cpy), brain(new Brain(*cpy.brain))
{
	return ;
}

Dog& Dog::operator=(const Dog& source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		*brain = *source.brain;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "goodbye doggy" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Scooby dooby doo" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}


/******************************************************/

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "a cat is born today" << std::endl;
	return ;
}

Cat::Cat(const Cat& cpy) : Animal(cpy), brain(new Brain(*cpy.brain))
{
	return ;
}

Cat& Cat::operator=(const Cat& source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		*brain = *source.brain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "cat destruction" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "John where is my lasagna" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}


/***********************************************************/

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong animal detetched" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{
	std::cout << "Something wrong is born, it reminds me of you!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::setType(const std::string& type)
{
	this->_type = type;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	this->_type = cpy.getType();
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destroyeeeeeeeerr" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& source)
{
	if (this != &source)
	{
		this->_type = source.getType();
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "ak-47 sound" << std::endl;
}

/******************************************************/

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "an alligator is born today" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy)
{
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& source)
{
	if (this != &source)
	{
		this->_type = source.getType();
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "chupacapra destruction" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "The earth is flat and this is my opinion" << std::endl;
}