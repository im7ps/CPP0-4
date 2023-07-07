/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:17:49 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/08 23:43:24 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "Materia.hpp"
#include <string>

class IMateriaSource
{
public:
    IMateriaSource();
    IMateriaSource(const IMateriaSource& cpy);
    IMateriaSource& operator=(const IMateriaSource& source);
	virtual ~IMateriaSource();

	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
private:
    AMateria* _knownMaterias[4];

public:
    MateriaSource();
    MateriaSource(MateriaSource const &other);
    MateriaSource &operator=(MateriaSource const &other);
    ~MateriaSource();

    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif