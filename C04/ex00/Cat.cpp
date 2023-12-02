/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:54:24 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/29 17:55:11 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat created" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "MIAU!" << std::endl;
}