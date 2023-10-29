/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:29:11 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/29 16:30:08 by iortega-         ###   ########.fr       */
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
	*this = src;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
	this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
	std::cout << "ClapTrap " << this->name << " created" << std::endl;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
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
	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy!" << std::endl;
		return ;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " be repaired " << amount << " hitPoints!" << std::endl;
}
