/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:55:40 by iortega-          #+#    #+#             */
/*   Updated: 2023/10/19 19:56:25 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	delete [] zombie;
}