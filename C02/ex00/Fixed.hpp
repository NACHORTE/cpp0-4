/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:04:25 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/22 19:04:48 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		~Fixed(void);
		Fixed & operator = (const Fixed &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};