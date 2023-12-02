/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:56:52 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/29 17:57:54 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog created" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "GUAU!" << std::endl;
}