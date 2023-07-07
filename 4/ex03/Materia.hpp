/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:10:42 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/17 14:42:28 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

#include <iostream>
#include <string>
#include "Character.hpp"

class AMateria {
protected:
    std::string _type;

public:
	AMateria();
    AMateria(std::string const &type);
	AMateria(const AMateria& cpy);
	AMateria& operator=(const AMateria& source);
	virtual ~AMateria();


    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice& cpy);
	Ice& operator=(const Ice& source);
	virtual ~Ice();

    AMateria *clone() const;

    void use(ICharacter &target);
};

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure& cpy);
	Cure& operator=(const Cure& source);
	virtual ~Cure();

    AMateria *clone() const;

    void use(ICharacter &target);
};

#endif