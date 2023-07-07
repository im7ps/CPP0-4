/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:47:25 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/01 23:49:51 by sgerace          ###   ########.fr       */
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