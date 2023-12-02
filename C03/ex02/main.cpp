/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:29:06 by iortega-          #+#    #+#             */
/*   Updated: 2023/12/02 11:59:47 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("ScavTrap");
	FragTrap FragTrap("FragTrap");

	scavTrap.attack("enemy");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();

	FragTrap.attack("enemy");
	FragTrap.takeDamage(5);
	FragTrap.beRepaired(5);
	FragTrap.highFivesGuys();
	return (0);
	
}