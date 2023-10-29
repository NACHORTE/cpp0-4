/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:34:43 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/29 16:58:37 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FlagTrap " << this->name << " created" << std::endl;
}

FlagTrap::~FlagTrap(void)
{
	std::cout << "FlagTrap " << this->name << " destroyed" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << this->name << " wants to high five" << std::endl;
}
