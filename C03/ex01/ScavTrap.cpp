/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:56:08 by iortega-          #+#    #+#             */
/*   Updated: 2023/12/02 11:49:08 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " destroyed" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->name << " has no energy!" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
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