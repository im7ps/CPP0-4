/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:47:25 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/02 09:55:19 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fp_num = 0;
	return ;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fp_num = value.getRawBits();
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(Fixed const &value)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &value)
		return *(this);
	this->_fp_num = value.getRawBits();
	return *(this);
}

Fixed::Fixed(const int value) 
{
	std::cout << "int constructor called" << std::endl;
	_fp_num = value << _bits;
}

Fixed::Fixed(float value)
{
	std::cout << "float constructor called" << std::endl;
    _fp_num = static_cast<int>(roundf(value * (1 << _bits)));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp_num);
}

void Fixed::setRawBits(int const raw)
{
	this->_fp_num = raw;
	return ;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->_fp_num) / (1 << this->_bits);
}

int Fixed::toInt(void) const
{
    return this->_fp_num >> this->_bits;
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

