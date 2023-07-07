/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:10:46 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/08 23:47:14 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "Character.hpp"

AMateria::AMateria()
{
	std::cout << "Created Materia" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "Created Materia with a type" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Destroyed Materia" << std::endl;
}

AMateria::AMateria(const AMateria& cpy)
{
	this->_type = cpy.getType();
	return ;
}

AMateria& AMateria::operator=(const AMateria& source)
{
	if (this != &source)
	{
		this->_type = source.getType();
	}
	return (*this);
}

std::string const& AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	static_cast<void>(target);
}

Ice::Ice() : AMateria()
{
	std::cout << "Created Ice" << std::endl;
	_type = "ice";
}

Ice::~Ice()
{
	std::cout << "Destroyed Ice" << std::endl;
}

Ice::Ice(const Ice& cpy) : AMateria(cpy)
{
	std::cout << "Copied Ice" << std::endl;
}

Ice& Ice::operator=(const Ice& source)
{
	if (this != &source)
	{
		this->_type = source._type;
	}
	return (*this);
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Cure::Cure() : AMateria()
{
	std::cout << "Created Cure" << std::endl;
	_type = "cure";
}

Cure::~Cure()
{
	std::cout << "Destroyed Cure" << std::endl;
}

Cure::Cure(const Cure& cpy) : AMateria(cpy)
{
	std::cout << "Copied Cure" << std::endl;
}

Cure& Cure::operator=(const Cure& source)
{
	if (this != &source)
	{
		this->_type = source._type;
	}
	return (*this);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
