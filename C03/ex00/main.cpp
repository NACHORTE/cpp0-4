/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:29:06 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/22 18:43:07 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("ClapTrap");

	clapTrap.attack("enemy");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	return (0);
}