/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:04:25 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/22 16:52:15 by iortega-         ###   ########.fr       */
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

		bool operator > (const Fixed &rhs) const;
		bool operator < (const Fixed &rhs) const;
		bool operator >= (const Fixed &rhs) const;
		bool operator <= (const Fixed &rhs) const;
		bool operator == (const Fixed &rhs) const;
		bool operator != (const Fixed &rhs) const;
		
		Fixed operator + (const Fixed &rhs) const;
		Fixed operator - (const Fixed &rhs) const;
		Fixed operator * (const Fixed &rhs) const;
		Fixed operator / (const Fixed &rhs) const;

		Fixed & operator ++ (void);
		Fixed operator ++ (int);
		Fixed & operator -- (void);
		Fixed operator -- (int);

		static Fixed & min(Fixed &a, Fixed &b);
		static Fixed & max(Fixed &a, Fixed &b);
		static const Fixed & min(const Fixed &a, const Fixed &b);
		static const Fixed & max(const Fixed &a, const Fixed &b);
};

std::ostream & operator << (std::ostream &o, const Fixed &rhs);