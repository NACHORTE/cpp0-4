/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:39:27 by iortega-          #+#    #+#             */
/*   Updated: 2023/11/17 20:50:28 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string const type)
{
	this->type = type;
}