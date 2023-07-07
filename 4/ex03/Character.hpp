/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:10:52 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/17 15:08:38 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
class AMateria;

class ICharacter
{
public:
    ICharacter();
    ICharacter(const ICharacter& cpy);
    ICharacter& operator=(const ICharacter& source);
	virtual ~ICharacter();

	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter {
private:
    std::string _name;
    AMateria* _inventory[4];

public:
    Character(std::string const &name);
    Character(Character const &other);
    Character &operator=(Character const &other);
    ~Character();

    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif