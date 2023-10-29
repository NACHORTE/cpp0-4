/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:29:06 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/29 17:01:01 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("ScavTrap");
	FlagTrap flagTrap("FlagTrap");

	scavTrap.attack("enemy");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();

	flagTrap.attack("enemy");
	flagTrap.takeDamage(5);
	flagTrap.beRepaired(5);
	flagTrap.highFivesGuys();
	return (0);
	
}