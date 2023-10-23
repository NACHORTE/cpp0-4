/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:04:25 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/22 20:11:42 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);
		Fixed & operator = (const Fixed &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream & operator << (std::ostream &o, const Fixed &rhs);
