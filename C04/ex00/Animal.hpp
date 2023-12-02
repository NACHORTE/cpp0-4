/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:38:31 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/29 17:38:45 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		~Animal(void);
		Animal(const Animal &);
		Animal & operator=(const Animal &rhs);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};