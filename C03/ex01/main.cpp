/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:29:06 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/22 19:59:00 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("ScavTrap");

	scavTrap.attack("enemy");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
	return (0);
}