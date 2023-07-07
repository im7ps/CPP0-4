/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 02:37:13 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/02 12:21:46 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) 
{
	Point a(2, 3);
	Point b(1.5f, 2);
	Point c(9, 3.1f);

	Point p1(2.0f, 2.0f);
	Point p2(4, 7);
	Point p3(-0.5f, 1.0f);
	Point p4(0.5f, 1.0f);
	Point p5(-0.5f, 2.0f);
	Point p6(1, 2.4f);
	Point p7(1, 2.5f);
	

	if (!(bsp(a, b, c, p1)))
		std::cout << "outside" << std::endl;
	else
		std::cout << "inside" << std::endl;

	// if (!(bsp(a, b, c, p2)))
	// 	std::cout << "outside" << std::endl;
	// else
	// 	std::cout << "inside" << std::endl;

	// if (!(bsp(a, b, c, p3)))
	// 	std::cout << "outside" << std::endl;
	// else
	// 	std::cout << "inside" << std::endl;

	// if (!(bsp(a, b, c, p4)))
	// 	std::cout << "outside" << std::endl;
	// else
	// 	std::cout << "inside" << std::endl;

	// if (!(bsp(a, b, c, p5)))
	// 	std::cout << "outside" << std::endl;
	// else
	// 	std::cout << "inside" << std::endl;

	// if (!(bsp(a, b, c, p6)))
	// 	std::cout << "outside" << std::endl;
	// else
	// 	std::cout << "inside" << std::endl;

	// if (!(bsp(a, b, c, p7)))
	// 	std::cout << "outside" << std::endl;
	// else
	// 	std::cout << "inside" << std::endl;
	return 0;
}