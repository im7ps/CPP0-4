	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 03:24:16 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/02 03:32:03 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 02:36:21 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/02 03:23:00 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cstring>
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int fp_num;
		static const int fbits_num;
	public:
		Fixed();
		Fixed(const Fixed &n);
		~Fixed();

		Fixed(const int i);
		Fixed(const float f);

		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed& operator=(const Fixed &n);

		bool operator>(const Fixed &n) const;
		bool operator<(const Fixed &n) const;
		bool operator>=(const Fixed &n);
		bool operator<=(const Fixed &n);
		bool operator!=(const Fixed &n);
		bool operator==(const Fixed &n);

		Fixed& operator+(const Fixed &n);
		Fixed& operator-(const Fixed &n);
		Fixed& operator*(const Fixed &n);
		Fixed operator/(int n) const;

		Fixed& operator++(void); //pre incremento (non ha un tipo di dato fra parentesi, void)
		Fixed& operator--(void);
		Fixed operator++(int); //post incremento (ha un tipo di dato fra parentesi, in questo caso int)
		Fixed operator--(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		static Fixed& min(Fixed& n1, Fixed& n2);
		static Fixed& max(Fixed& n1, Fixed& n2);
		static const Fixed& min(const Fixed& n1, const Fixed& n2);
		static const Fixed& max(const Fixed& n1, const Fixed& n2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif