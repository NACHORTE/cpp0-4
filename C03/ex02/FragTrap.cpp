/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:34:43 by iortega-          #+#    #+#             */
/*   Updated: 2023/12/02 11:58:08 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " created" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " wants to high five" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		hitPoints = rhs.hitPoints;
		energyPoints = rhs.energyPoints;
		attackDamage = rhs.attackDamage;
	}
	return (*this);
}
