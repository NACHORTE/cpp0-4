/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:29:11 by iortega-          #+#    #+#             */
/*   Updated: 2023/12/02 11:58:32 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	std::cout << "ClapTrap " << this->name << " created" << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
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

void ClapTrap::attack(std::string const & target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy!" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy!" << std::endl;
		return ;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " be repaired " << amount << " hitPoints!" << std::endl;
}
