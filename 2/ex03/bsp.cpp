/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:21:53 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/02 12:19:46 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed abs(Fixed value)
{
    if (value < 0)
        value = value * -1;
    return (value);
}

Fixed area(Point const a, Point const b, Point const c) {
    Fixed term1 = a.getX() * (b.getY() - c.getY());
    Fixed term2 = b.getX() * (c.getY() - a.getY());
    Fixed term3 = c.getX() * (a.getY() - b.getY());
    Fixed sum = term1 + term2 + term3;
    return (sum / 2);
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed abcA = abs(area(a, b, c));
    Fixed abpA = abs(area(a, b, point));
    Fixed acpA = abs(area(a, c, point));
    Fixed bcpA = abs(area(b, c, point));

    std::cout << "main (float) " << abcA.toFloat() << std::endl;
    std::cout << "sub1 (float) " << abpA.toFloat() << std::endl;
    std::cout << "sub2 (float) " << acpA.toFloat() << std::endl;
    std::cout << "sub3 (float) " << bcpA.toFloat() << std::endl;

    return (abcA == (abpA + acpA + bcpA));
}



/*Fixed abs(Fixed value)
{
	if (value < 0)
		value = value * -1;
	return (value);
}

Fixed	area(Point const a, Point const b, Point const c) {
	return (((a.getX() * ( b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * ( a.getY() - b.getY()))) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed abcA = abs(area(a, b, c));
	Fixed abpA = abs(area(a, b, point));
	Fixed acpA = abs(area(a, c, point));
	Fixed bcpA = abs(area(b, c, point));

	std::cout << "main " << abcA << std::endl;
	std::cout << "sub1 " << abpA << std::endl;
	std::cout << "sub2 " << acpA << std::endl;
	std::cout << "sub3 " << bcpA << std::endl;


}*/