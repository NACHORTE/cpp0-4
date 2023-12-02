/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:39:16 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/29 17:43:38 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Copy Animal created" << std::endl;
	*this = rhs;
}

Animal & Animal::operator=(const Animal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}
