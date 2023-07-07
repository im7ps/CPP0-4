/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 02:54:40 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/02 03:50:39 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fbits_num = 8;

Fixed::Fixed() : fp_num(0)
{
	return ;
}

Fixed::Fixed(const Fixed& n)
{
	this->fp_num = n.getRawBits();
	return ;
}

Fixed::~Fixed()
{
	return ;
}

int Fixed::getRawBits() const
{
	return (this->fp_num);
}

void Fixed::setRawBits(int const raw)
{
	this->fp_num = raw;
	return ;
}

Fixed::Fixed(const int i)
{
	this->fp_num = i * (1 << this->fbits_num);
	return ;
}

Fixed::Fixed(const float f)
{
	this->fp_num = roundf(f * (1 << this->fbits_num));
	return ;
}

float	Fixed::toFloat(void) const
{
	return (((float)this->fp_num / (float)(1 << this->fbits_num)));
}

int	Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed& Fixed::operator=(const Fixed& n)
{
	if (this == &n)
		return *(this);
	this->fp_num = n.getRawBits();
	return *(this);
}

bool Fixed::operator>(const Fixed &n) const
{
	return (this->fp_num > n.fp_num);
}

bool Fixed::operator<(const Fixed &n) const
{
	return (this->fp_num < n.fp_num);
}

bool Fixed::operator>=(const Fixed &n)
{
	return (this->fp_num >= n.fp_num);
}

bool Fixed::operator<=(const Fixed &n)
{
	return (this->fp_num <= n.fp_num);
}

bool Fixed::operator==(const Fixed &n)
{
	return (this->fp_num == n.fp_num);
}

bool Fixed::operator!=(const Fixed &n)
{
	return (this->fp_num != n.fp_num);
}

Fixed& Fixed::operator+(const Fixed &n)
{
	this->setRawBits(this->getRawBits() + n.getRawBits());
	return *(this);
}

Fixed& Fixed::operator-(const Fixed &n)
{
	this->setRawBits(this->getRawBits() - n.getRawBits());
	return *(this);
}

Fixed& Fixed::operator*(const Fixed &n)
{
	this->setRawBits(this->getRawBits() * n.getRawBits() >> this->fbits_num);
	return *(this);
}

Fixed& Fixed::operator/(const Fixed &n)
{
	this->setRawBits(this->getRawBits() / n.getRawBits());
	return *(this);
}

Fixed& Fixed::operator++(void)
{
	this->fp_num++;
	return *(this);
}

Fixed& Fixed::operator--(void)
{
	this->fp_num--;
	return *(this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp = *this;
	this->fp_num++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp = *this;
	this->fp_num--;
	return (tmp);
}

Fixed& Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed& Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

const Fixed& Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

const Fixed& Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}