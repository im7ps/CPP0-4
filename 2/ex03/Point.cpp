/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:12:21 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/02 10:21:25 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	return ;
}

Point::Point(const float x, const float y) : x(x), y(y)
{
	return ;
}

Point::Point(const Point& cpy)
{
	this->x = cpy.x;
	this->y = cpy.y;
	return ;
}

Point::~Point()
{
	return ;
}

Point& Point::operator=(const Point& ref)
{
	if (this != &ref)
	{
		this->x = ref.getX();
		this->y = ref.getY();
	}
	return *(this);
}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}