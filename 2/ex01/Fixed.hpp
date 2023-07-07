/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:47:23 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/02 09:56:41 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int _fp_num;
		static const int _bits;
	public:
		Fixed();
		Fixed(const Fixed &cpy);
		~Fixed();
		
		Fixed &operator=(const Fixed &cpy);
		Fixed(const int value);
		Fixed(float value);
		

		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif