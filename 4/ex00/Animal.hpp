/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:31:26 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/17 14:27:42 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected: std::string _type;

	public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal& cpy);
	virtual ~Animal();
	Animal& operator=(const Animal& source);

	virtual void makeSound() const;
	std::string getType() const;
	void setType(const std::string& type);
};

class Dog : public Animal {
	public:
	Dog();
	Dog(const Dog& cpy);
	~Dog();
	Dog& operator=(const Dog& source);

	void makeSound() const;
};

class Cat : public Animal {
	public:
	Cat();
	Cat(const Cat& cpy);
	~Cat();
	Cat& operator=(const Cat& source);

	void makeSound() const;
};

class WrongAnimal {
	protected: std::string _type;

	public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal& cpy);
	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& source);

	virtual void makeSound() const;
	std::string getType() const;
	void setType(const std::string& type);
};

class WrongCat : public WrongAnimal {
	public:
	WrongCat();
	WrongCat(const WrongCat& cpy);
	~WrongCat();
	WrongCat& operator=(const WrongCat& source);

	void makeSound() const;
};

#endif