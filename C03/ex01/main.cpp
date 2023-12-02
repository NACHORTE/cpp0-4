/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:29:06 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/30 19:49:04 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("ScavTrap");
	ScavTrap scavTrap2("ScavTrap2");

	scavTrap.attack("enemy");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
	return (0);
}