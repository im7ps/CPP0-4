/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:10:50 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/17 15:44:46 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Materia.hpp"

ICharacter::ICharacter()
{
	std::cout << "Interface Character created" << std::endl;
}

ICharacter::ICharacter(const ICharacter& cpy)
{
	static_cast<void>(cpy);
}

ICharacter& ICharacter::operator=(const ICharacter& source)
{
	static_cast<void>(source);
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "Interface Character destroyed" << std::endl;
}

Character::Character(std::string const& name) : _name(name)
{
	int i = 0;
	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	std::cout << "Character created and initialized" << std::endl;
}

Character::Character(Character const& cpy) : _name(cpy._name)
{
	int i = 0;
	while (i < 4)
	{
		if (cpy._inventory[i])
		{
			// delete _inventory[i];
			_inventory[i] = cpy._inventory[i]->clone();
		}
		else
		{
			_inventory[i] = NULL;
		}
		i++;
	}
}

Character& Character::operator=(Character const& source)
{
	int i = 0;
	if (this != &source)
	{
		_name = source._name;
		while (i < 4)
		{
			delete _inventory[i];
			if (source._inventory[i] != NULL)
			{
				// delete _inventory[i];
				_inventory[i] = source._inventory[i]->clone();
			}
			else
			{
				_inventory[i] = NULL;
			}
			i++;
		}
	}
	return (*this);
}

Character::~Character()
{
	int i = 0;
	while (i < 4)
	{
		delete _inventory[i];
		// _inventory[i] = NULL;
		i++;
	}
	std::cout << "Character destroyed and inventory cleaned" << std::endl;
}

std::string const& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m->clone();
			break ;
		}
		i++;
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index < 4)
	{
		_inventory[index] = NULL;
	}
}

void Character::use(int index, ICharacter& character)
{
	if (index >= 0 && index < 4 && _inventory[index])
	{
		_inventory[index]->use(character);
	}
}