/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:54:47 by iortega-          #+#    #+#             */
/*   Updated: 2023/11/17 20:49:15 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}