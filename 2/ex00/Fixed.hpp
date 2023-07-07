/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:47:23 by sgerace           #+#    #+#             */
/*   Updated: 2023/05/01 22:57:27 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int _fp_num;
		static const int _bits;
	public:
		Fixed();
		Fixed(const Fixed &cpy);
		~Fixed();
		Fixed &operator=(const Fixed &cpy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif