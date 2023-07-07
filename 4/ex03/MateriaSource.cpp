/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:07:32 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/17 15:42:02 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "Interface MateriaSource created" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& cpy)
{
	static_cast<void>(cpy);
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& source)
{
	static_cast<void>(source);
	return (*this);
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "Interface MateriaSource destroyed" << std::endl;
}

MateriaSource::MateriaSource()
{
	int i = 0;
	while (i < 4)
	{
		_knownMaterias[i] = NULL;
		i++;
	}
	std::cout << "MateriaSource created and initialized" << std::endl;
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	while (i < 4)
	{
		delete _knownMaterias[i];
		_knownMaterias[i] = NULL;
		i++;
	}
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& cpy)
{
	*this = cpy;
	// int i = 0;
	// while (i < 4)
	// {
	// 	if (cpy._knownMaterias[i])
	// 	{
	// 		// delete this->_knownMaterias[i];
	// 		_knownMaterias[i] = cpy._knownMaterias[i]->clone();
	// 	}
	// 	else
	// 	{
	// 		_knownMaterias[i] = NULL;
	// 	}
	// 	i++;
	// }
}

MateriaSource& MateriaSource::operator=(MateriaSource const& source)
{
	int i = 0;
	if (this != &source)
	{
		while (i < 4)
		{
			delete _knownMaterias[i];
			if (source._knownMaterias[i] != NULL)
			{
				_knownMaterias[i] = source._knownMaterias[i]->clone();
			}
			else
			{
				_knownMaterias[i] = NULL;
			}
			i++;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (!_knownMaterias[i])
		{
			_knownMaterias[i] = m->clone();
			break ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	int i = 0;
	while (i < 4)
	{
		if (_knownMaterias[i] && (_knownMaterias[i]->getType() == type))
		{
			return (_knownMaterias[i]->clone());
		}
		i++;
	}
	return (NULL);
}
